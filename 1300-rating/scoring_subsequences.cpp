#include <bits/stdc++.h>

using namespace std;

int bs(int low , int high, vector<int> &v) {

	int ans = 1;
	int st = low;

	while (low <= high) {

		int mid  = high + (low - high) / 2;

		if (v[mid] >= (mid + 1 - st)) {
			ans = mid + 1;
			low = mid + 1;
		} else {
			high = mid - 1;
		}

	}

	return ans;
}

void solve() {

	int n;
	cin >>  n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	reverse(v.begin(), v.end());

	vector<int> ans(n);

	for (int i = 0; i < n; i++) {

		ans[i] = bs(i, n - 1, v) - i;
	}

	reverse(ans.begin(), ans.end());

	for (auto i : ans) cout << i << " ";

	cout << endl;
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