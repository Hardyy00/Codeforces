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



void solve() {


	int n, g;
	cin >> n >> g;

	vl v(n + 1);

	vi id(n + 1, 0);
	vpii p(g);

	REP(i, 1, n) {
		cin >> v[i];
	}

	REP(i, 0, g - 1) {
		int u, v;
		cin >> u >> v;

		id[u]++;
		id[v]++;

		p[i] = MP(u, v);
	}

	if ((g & 1) == 0) {
		cout << 0 << endl;
		return ;
	}

	ll ans = LLONG_MAX;


	fauto(i, p) {

		if (id[i.first] % 2 == 1) {

			ans = min(ans, v[i.first]);
		}

		if (id[i.second] % 2 == 1) {

			ans = min(ans, v[i.second]);
		}

		if (id[i.first] % 2 == 0 && id[i.second] % 2 == 0) {

			ans = min(ans, v[i.first] + v[i.second]);
		}
	}

	cout << ans << endl;


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
