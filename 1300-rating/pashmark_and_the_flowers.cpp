#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void solve() {

	int n;
	cin >> n;

	int maxi = INT_MIN;
	int mini = INT_MAX;

	map<int, int> map;

	for (int i = 0; i < n; i++) {

		int val;
		cin >> val;

		maxi = max(maxi, val);
		mini = min(mini, val);

		map[val]++;
	}

	ll ways = maxi == mini ? (map[maxi] * 1LL * (map[maxi] - 1)) / 2 : map[maxi] * 1LL * map[mini];

	cout << maxi - mini << " " << ways << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	solve();
}