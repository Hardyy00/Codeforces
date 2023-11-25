#include <bits/stdc++.h>

using namespace std;

bool f(int i, int j, vector<vector<char>> &v , vector<vector<bool>> &visit ) {


	while (j != v[0].size() - 1) {

		visit[i][j] = true;

		if (i == 0) {

			if ( !visit[i + 1][j] && v[i + 1][j] != 'W') {

				i++;
			} else if (v[i][j + 1] != 'W') {
				j++;
			} else {
				// cout << i << " " << j << endl;
				return false;
			}

		} else if (i == 1) {

			if (!visit[i - 1][j] && v[i - 1][j] != 'W') {
				i--;
			} else if (v[i][j + 1] != 'W') {
				j++;
			} else {
				// cout << i << " " << j << endl;

				return false;
			}

		}
	}

	return true;

}


void solve() {

	int n;
	cin >> n;

	vector<vector<char>> mat(2, vector<char>(n));
	vector<vector<bool>> visit(2, vector<bool>(n , false));

	for (int i = 0; i < 2; i++) {

		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {

			mat[i][j] = s[j];

		}
	}

	bool ans = f(0, 0, mat, visit);

	for (int i = 0; i < n; i++) {

		visit[0][i] = visit[1][i] = false;

	}

	ans = ans || f(1, 0, mat, visit);

	cout << (ans ? "YES" : "NO") << endl;

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