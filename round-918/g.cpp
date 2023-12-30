#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



typedef long long ll;
typedef long long int lli;
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

ll dp[1002][1002];

void print_map(mii &map) {

	cout << "{ ";
	fauto(i, map) {

		cout << "{ " << i.F << " : " << i.S << " }, ";
	}

	cout << " }" << endl;
}

void print_vector(vi &v) {

	cout << "{ ";

	fauto(i, v) cout << i << ", ";

	cout << " }" << endl;
}

void print_set(sll &s) {

	cout << "{ " ;

	fauto(i, s) cout << i << ", ";

	cout << " } " << endl;
}



void solve() {

	int n, m;
	cin >> n >> m;

	vector<pair<int, ll>> adj[n];

	REP(i, 0, m - 1) {

		int u, v;
		ll w;
		cin >> u >> v >> w;

		u--;
		v--;
		adj[u].PB(MP(v, w));
		adj[v].PB(MP(u, w));

	}

	vl s(n);

	REP(i, 0, n - 1) cin >> s[i];

	priority_queue<pair<ll, pair<int, ll>>, vector<pair<ll, pair<int, ll>>>, greater<pair<ll, pair<int, ll>>>> pq;

	vl dis(n * 1000 + 5, 1e18);

	dis[0 * 1000 + s[0]] = 0;

	pq.push({0, {0, s[0]}});

	while (!pq.empty()) {

		auto par = pq.top();
		pq.pop();

		fauto(i, adj[par.S.F]) {
			// cout << par.S.F << " " << i.F << endl;

			// cout <<
			if (dis[i.F * 1000 + par.S.S] > par.F + i.S * par.S.S) {

				dis[i.F * 1000 + par.S.S] = par.F + i.S * par.S.S;

				pq.push({dis[i.F * 1000 + par.S.S], {i.F, min(par.S.S, s[i.F])}});

				// cout << "NODE : " << (i.F * 1000 + par.S.S) << " " <<  (dis[i.F * 1000 + par.S.S] == 1e18 ? -1 : dis[i.F * 1000 + par.S.S]) << endl;

			}
		}
	}


	ll mini = LLONG_MAX;

	REP(i, ((n - 1) * 1000 + 1), (n * 1000))  mini = min(mini, dis[i]);

	cout << mini << endl;
	// cout << dis[4001] << endl;



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
		memset(dp, -1, sizeof(dp));
		solve();
	}



}