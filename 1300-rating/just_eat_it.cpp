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
typedef vector<char> vc;
typedef vector<vector<long long>> vvll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef unordered_set<long long> usll;
typedef stack<int> sti;
typedef stack<long long> stll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<long long, long long>> vpll;
typedef priority_queue<int> pqi;
typedef priority_queue<pair<int, int>> pqpii;

const ll MOD = 1e9 + 7;


void solve() {

	int n;
	cin >> n;

	vl v(n);

	ll sum  = 0;
	bool p = true;
	REP(i, 0, n - 1) {
		cin >> v[i];
		sum += v[i];

		if (v[i] <= 0)  p = false;
	}

	if (p) {

		cout << "YES" << endl;
		return;
	}

	ll maxi1 = LLONG_MIN;
	ll curr = 0;
	REP(i, 0, n - 2) {
		curr += v[i];
		maxi1 = max(maxi1, curr );

		if (curr < 0) curr = 0;
	}

	ll maxi2 = LLONG_MIN;
	curr = 0;
	REP(i, 1, n - 1) {
		curr += v[i];
		maxi2 = max(maxi2, curr );
		if (curr < 0) curr = 0;
	}


	cout << (max(maxi1, maxi2) < sum ? "YES" : "NO") << endl;

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