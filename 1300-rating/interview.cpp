#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int f(int n, vector<ll> &pre) {

	ll low = 0;
	ll high = n - 1;
	ll ans = 0;

	while (low <= high) {

		ll mid = high + (low - high) / 2;


		ll left = pre[mid];
		if (low - 1 > -1) left -= pre[low - 1];

		cout << "? " << (mid - low + 1) << " ";

		for (int i = low + 1; i <= mid + 1; i++) {
			cout << i << " ";
		}

		cout << endl;

		ll val;
		cin >> val;

		if (left == val) {
			low = mid + 1;
		} else {
			ans = mid;
			high = mid - 1;
		}

	}

	return ans;
}

void solve() {


	int n;
	cin >> n;
	vector<ll> pre(n);

	cin >> pre[0];

	for (int i = 1; i < n; i++) {
		ll val;
		cin >> val;
		pre[i] = pre[i - 1] + val;
	}

	ll ans = f(n, pre);

	cout << "! " << ans + 1 << endl;

	fflush(stdout);

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt" , "w" , stdout);
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