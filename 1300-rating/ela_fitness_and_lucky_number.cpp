#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli f(lli num) {

	lli low = 0;
	lli high = 1e9;

	lli ans = 0;

	while (low <= high) {

		lli mid = high + (low - high) / 2;

		if (mid * mid <= num) {
			ans = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return ans;
}

void solve() {

	lli l, r;
	cin >> l >> r;

	lli sql = f(l);
	lli sqr = f(r);


	lli ans = 0;

	if (sql == sqr) {

		for (lli i = 0; i < 3; i += 1LL) {

			lli p = sql * (sql + i);

			if ( p >= l && p <= r) ans++;
		}
	} else {
		ans = (sqr - sql - 1) * 3LL;
		for (int i = 0; i < 3; i++) {

			lli p1 = sql * (sql + i);
			lli p2 = sqr * (sqr + i);

			if (l <= p1 && p1 <= r) ans++;

			if (l <= p2 && p2 <= r) ans++;
		}
	}

	cout << ans << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w", stdout);
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