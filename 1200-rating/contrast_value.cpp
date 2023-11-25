#include <bits/stdc++.h>

using namespace std;

void solve() {

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	int s = unique(v.begin(), v.end()) - v.begin();


	int ans = s;

	for (int i = 0; i < s - 2; i++) {

		if (v[i] > v[i + 1] && v[i + 1] > v[i + 2]) ans--;

		if (v[i] < v[i + 1] && v[i + 1] < v[i + 2]) ans--;
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