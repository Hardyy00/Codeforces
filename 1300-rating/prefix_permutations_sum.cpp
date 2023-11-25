#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {

	int n;
	cin >> n;

	map<ll, int> map;

	ll pre;
	cin >> pre;

	map[pre]++;

	for (int i = 1; i < n - 1; i++) {
		ll val;
		cin >> val;

		map[val - pre]++;
		pre = val;
	}

	vector<ll> left;
	vector<ll> mapLeft;

	for (int i = 1; i <= n; i++) {

		if (map.count(i) && map[i] > 0) {
			map[i]--;
		} else {
			left.push_back(i);
		}
	}

	if (left.size() > 2) {
		cout << "NO" << endl;
		return;
	}

	for (auto i : map) {

		if (i.second > 0) mapLeft.push_back(i.first);
	}


	if (mapLeft.size() > 2) {
		cout << "NO" << endl;
		return;
	}



	if (mapLeft.size() == 0 && left.size() == 1) {
		cout << "YES" << endl;
		return ;
	}

	if (left.size() == 2 && mapLeft.size() == 1 && left[0] + left[1] == mapLeft[0] ) {

		cout << "YES" << endl;
		return ;
	}

	cout << "NO" << endl;





}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
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