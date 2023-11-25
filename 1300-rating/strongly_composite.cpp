#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



void solve() {


	int n ;
	cin >> n;

	map<int, int> map;

	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;

		for (int j = 2; j * j <= val; j++) {

			while (val % j == 0) {

				val /= j;
				map[j]++;
			}
		}

		if (val != 1) map[val]++;
	}


	int ans = 0;
	int rem = 0;

	for (auto i : map) {

		ans += i.second / 2;
		rem += i.second % 2;
	}

	ans += rem / 3;

	cout << ans << endl;

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