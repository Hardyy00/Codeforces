#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define REPD(i,a,b) for(int i=a;i>=b;i--)
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

	int n, k;
	cin >> n >> k;

	vi v(32, 0);

	REP(i, 0, n - 1) {

		int val;
		cin >> val;

		REPD(j, 31, 0) {

			v[j] += (val >> j) & 1;
		}


	}

	REPD(i, 30, 0) {

		if (n - v[i] <= k) {

			k -= (n - v[i]);
			v[i] = n;
		}
	}

	int ans = 0;

	REPD(i, 30, 0) {

		if (v[i] == n) ans = ans | (1 << i);
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