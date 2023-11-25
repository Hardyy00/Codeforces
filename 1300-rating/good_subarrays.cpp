#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(int t) {

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];


	int ei = 0;
	int si = 0;
	ll ans = 0;

	while (ei < n) {

		while ((v[ei] < (ei - si + 1)) && si <= ei) {
			si++;
		}

		ans += (1ll * (ei - si + 1));
		ei++;

	}

	cout << ans << "\n";
}

int main() {

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE



	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	int c = 0;

	while (t--) {
		c++;
		solve(c);
	}
}