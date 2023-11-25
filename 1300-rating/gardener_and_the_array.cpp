#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {


	int n ;
	cin >> n;

	vector<vector<int>> v(n, vector<int>());

	map<int, int> map;

	for (int i = 0; i < n; i++) {

		int t;
		cin >> t;

		while (t--) {
			int val;
			cin >> val;

			map[val]++;
			v[i].push_back(val);
		}
	}

	for (int i = 0; i < n; i++) {
		bool f = true;

		for (auto j : v[i]) {
			if (map[j] == 1) {
				f = false;
				break;
			}
		}

		if (f) {
			cout << "YES" << endl;
			return;
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