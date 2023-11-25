#include <bits/stdc++.h>

using namespace std;

void solve(int t) {

	int n, m;
	cin >> n >> m;

	vector<int> id(n + 1, 0);


	for (int i = 0; i < m; i++) {

		int u, v;
		cin >> u >> v;

		id[u]++;
		id[v]++;
	}

	int a = -1 , b = -1;
	map<int, int> map;

	for (int i : id) {
		if (i != 0) map[i]++;
	}

	for (auto i : map) {
		if (i.first == 1) continue;

		if (i.second > 1) b = i.first - 1;
		else a = i.first;
	}

	if (a == -1 && b != -1) a = b + 1;

	cout << a << " " << b << endl;
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