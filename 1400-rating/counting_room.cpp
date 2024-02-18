
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void dfs(int r, int c, vector<vector<bool>> &vis, vector<vector<char>> &grid) {

	vis[r][c] = true;

	vector<int> ra = { -1, 0, 1, 0};
	vector<int> ca = {0, 1, 0, -1};

	for (int i = 0; i < 4; i++) {

		int nr = r + ra[i];
		int nc = c + ca[i];

		if (nr >= 0 && nc >= 0 & nr < vis.size() && nc < vis[0].size() && !vis[nr][nc] && grid[nr][nc] == '.') {

			dfs(nr, nc, vis, grid);
		}
	}
}

int main() {

	int n, m;
	cin >> n >> m;

	vector<vector<char>> v(n, vector<char>(m));

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		for (int j = 0; j < m; j++) {

			v[i][j] = s[j];
		}
	}

	vector<vector<bool>> visit(n, vector<bool>(m, false));


	int cn  = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			if (v[i][j] == '.' && !visit[i][j]) {

				cn++;

				dfs(i, j, visit, v);
			}
		}
	}

	cout << cn  << endl;
}