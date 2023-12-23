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

int bs2(ll s, ll k, ll x) {


	ll low = 1;
	ll high = k - 1;

	ll ans = -1;

	while (low <= high) {

		ll mid = (low + high) >> 1;

		ll revMid = k - mid;

		ll tot = s +  ((k * (k - 1)) / 2) - ((revMid * (revMid - 1)) / 2);


		if (tot >= x) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}


	}

	if (ans == -1) ans = k - 1;

	return ans;
}

int bs(ll k, ll x) {

	ll low = 1;
	ll high = k;

	ll ans = -1;

	while (low <= high) {

		ll mid = (low + high) >> 1;

		ll s = (mid * 1LL * (mid + 1)) / 2;

		if (s >= x) {

			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}

	}

	if (ans == -1) ans = k;

	return ans;

}


void solve() {

	ll k, x;
	cin >> k >> x;

	ll cn = bs(k, x);

	ll t = (cn * 1LL * (cn + 1)) / 2;

	if (t >= x) {
		cout << cn << endl;
		return;
	}


	cn += bs2(t, k, x);

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