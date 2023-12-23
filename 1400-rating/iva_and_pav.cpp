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
typedef vector<vector<long long>> vvll;
typedef vector<vector<int>> vvi;
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

int bs(int l, int k, vvll &v) {

	int low = l;
	int high = v.size() - 1;
	int ans = -2;
	vi red(32, 0);

	if ((l - 1) >= 0) {
		REP(i, 0, 30) {
			red[i] = v[l - 1][i];
		}
	}

	while (low <= high) {

		int mid = (low + high ) >> 1;

		int t = 0;

		for (int i = 30; i >= 0; i--) {

			int tot = v[mid][i] - red[i];



			if (tot == (mid - l + 1)) {
				t = t | (1 << i);
			}

			// cout << "i : " << i << " tot : " << tot << " t : " << t <<  " mid : " << mid << " l : " << l << endl;
		}

		// cout << " mid : " << mid << " t : " << t << endl;
		if (t >= k) {
			ans = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return ans;
}
void solve() {


	int n;
	cin >> n;

	vl v(n, 0LL);


	REP(i, 0, n - 1) {

		cin >> v[i];
	}

	vvll pre(n, vl(32, 0LL));

	for (int i = 30; i >= 0; i--) {

		pre[0][i] = (v[0] >> i) & 1;
	}

	REP(i, 1, n - 1) {

		REPD(j, 30, 0) {
			pre[i][j] = pre[i - 1][j] + ((v[i] >> j) & 1);
		}
	}

	int x;
	cin >> x;

	vi ans(x);

	REP(i, 0, x - 1) {
		int l, k;
		cin >> l >> k;

		ans[i] = bs(l - 1, k, pre) + 1;
		// cout << "a : " <<  ans[i] << endl;

	}

	fauto(i, ans) cout << i << " ";
	cout << endl;
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