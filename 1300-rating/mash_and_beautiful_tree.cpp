#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	if (n == 1) {
		cout << 0 << endl;
		return;
	}

	int op = 0;

	for (int seg = 2; seg <= n; seg *= 2) {

		int mini1 = INT_MAX;
		int maxi1 = INT_MIN;
		int mini2 = INT_MAX;
		int maxi2 = INT_MIN;

		int mid = seg / 2;
		int i = 0, j = mid;

		while (j < n) {

			for (int k = 1; k <= mid; k++) {

				maxi1 = max(v[i], maxi1);
				mini1 = min(v[i], mini1);

				maxi2 = max(v[j], maxi2);
				mini2 = min(v[j], mini2);
				i++;
				j++;
			}

			if (abs(mini1 - maxi2) == 1 && mini1 > maxi2) op++;
			else if (abs(maxi1 - mini2) == 1 && mini2 > maxi1) {
				//
			} else {
				// cout << i << " " << j << " " <<  mini1 << " " << maxi1 << " " << mini2 << " " << maxi2 << endl;
				cout << - 1 << endl;
				return ;
			}

			i += mid;
			j += mid;

			maxi1 = maxi2 = INT_MIN;
			mini1 = mini2  = INT_MAX;
		}

	}


	cout << op << endl;
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