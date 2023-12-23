#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)


typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;
typedef stack<int> sti;
typedef stack<long long> stll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<long long, long long>> vpll;


const ll MOD = 1e9 + 7;

// {w, B}
pii dfs(int node, string &s, vi adj[], int *cn) {

	if (adj[node].empty()) {

		if (s[node - 1] == 'W') return {1, 0};

		return {0, 1};
	}

	pii p = {0, 0};

	if (s[node - 1] == 'W') p.F++;
	else p.S++;

	fauto(i, adj[node]) {

		pii t = dfs(i, s, adj, cn);
		p.F += t.F;
		p.S += t.S;
	}

	if (p.F == p.S) (*cn)++;

	return p;
}



void solve() {

	int n;
	cin >> n;

	vi adj[n + 1];

	REP(i, 2, n) {
		int val;
		cin >> val;

		adj[val].PB(i);
	}

	string s;
	cin >> s;

	int cn = 0;

	dfs(1, s, adj, &cn);

	cout << cn << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--) {

		solve();
	}
}