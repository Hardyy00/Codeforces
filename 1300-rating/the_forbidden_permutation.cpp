#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()



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

const ll MOD = 1e9 + 7;



void solve() {

	int n, m, d;
	cin >> n >> m >> d;

	umii mp;

	for (int i = 1; i <= n; i++) {
		int val;
		cin >> val;

		mp[val] = i;
	}

	vi v(m);

	for (int i = 0; i < m; i++) {
		int val;
		cin >> val;
		v[i] = val;
	}

	int ans = INT_MAX;

	for (int i = 0; i < m - 1; i++) {
		int p1 = mp[v[i]];
		int p2 = mp[v[i + 1]];

		if (p1 > p2 || (p2 - p1 > d)) {
			ans = 0;
			break;
		}

		ans = min(ans, p2 - p1);

		int swapsToTake = d + 1 - (p2 - p1);

		int rem = p1 - 1 + (n - p2);

		if (rem >= swapsToTake) ans = min(ans, swapsToTake);
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