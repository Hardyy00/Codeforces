#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


ll f(ll num, ll f1) {

	for (ll i = 2; i * i <= num; i += 1L) {

		if (num % i == 0 && (num / i) != i && i != f1 && f1 != (num / i)) {
			return i;
		}
	}

	return -1;
}

void solve() {


	ll n ;
	cin >> n;

	if (n <= 10) {
		cout << "NO" << endl;
		return ;
	}

	for (ll i = 2; i * i <= n; i += 1LL) {

		if (n % i == 0) {

			ll f1 = i;
			ll f2 = n / i;

			ll f3 = f(f2, f1);

			if (f3 == -1) continue;
			else {

				cout << "YES" << endl;
				cout << f1 << " " << (f2 / f3) << " " << f3 << "\n";
				return;
			}

		}
	}
	cout << "NO" << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
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