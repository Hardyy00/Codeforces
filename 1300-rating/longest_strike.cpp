#include <bits/stdc++.h>

using namespace std;

void solve(int c) {

	int n, k;
	cin >> n >> k;

	map<int, int> map;

	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;

		map[val]++;
	}

	vector<pair<int, int>> v(map.size());

	int it = 0;
	for (auto i : map) {

		v[it++] = {i.first, i.second};
	}

	sort(v.begin(), v.end());

	int a = -1 , b = -1;
	int maxi = -1;

	if (v[0].second >= k) {
		maxi = 0;
		a = v[0].first ;
		b = a;
	}

	int l = -1, r = -1;
	l = r = a;
	for (int i = 1; i < v.size(); i++) {

		if (v[i].first == v[i - 1].first + 1) {

			if (v[i].second >= k) {

				if (v[i - 1].second >= k) r = v[i].first;
				else {
					l = v[i].first;
					r = v[i].first;
				}

			} else if (l != -1 && r != -1) {

				if ((r - l) > maxi) {
					maxi = r - l;
					a = l;
					b = r;
				}

				l = -1;
				r = -1;
			}

		} else if (v[i].second >= k) {

			if (l != - 1 && r != -1  && (r - l) > maxi) {
				maxi = r - l;
				a = l;
				b = r;
			}

			l = v[i].first;
			r = v[i].first;
		} else if (l != -1 && r != -1) {

			if ((r - l) > maxi) {
				maxi = r - l;
				a = l;
				b = r;
			}

			l = -1;
			r = -1;
		}


	}

	if (l != -1 && r != -1 && (r - l) > maxi ) {

		maxi = r - l;
		a = l;
		b = r;

	}

	if (maxi < 0) {
		cout << - 1 << endl;
		return ;
	}

	cout << a << " " << b << endl;



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

	int c = 0;

	while (t--) {
		c++;
		solve(c);
	}
}