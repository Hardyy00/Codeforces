#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)


typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
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
typedef priority_queue<int> pqi;
typedef priority_queue<pair<int, int>> pqpii;

const ll MOD = 1e9 + 7;


ll dfs(int node, vb &visit, vi adj[], vl &v) {

	ll mini = v[node];
	visit[node] = true;

	fauto(i, adj[node]) {

		if (!visit[i]) {
			mini = min(mini, dfs(i, visit, adj, v));
		}
	}

	return mini;
}

void solve() {

	int n, m;
	cin >> n >> m;

	vl v(n + 1);

	REP(i, 1, n) cin >> v[i];

	vi adj[n + 1];

	REP(i, 0, m - 1) {
		int u, v;
		cin >> u >> v;

		adj[u].PB(v);
		adj[v].PB(u);
	}

	vb visit(n + 1, false);

	ll cost = 0;

	REP(i, 1, n) {

		if (!visit[i]) {
			cost += dfs(i, visit, adj, v);
		}
	}

	cout << cost << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);



	solve();




}