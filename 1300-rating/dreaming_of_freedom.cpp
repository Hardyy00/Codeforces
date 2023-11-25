#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(int t) {

	int n, m;
	cin >> n >> m;

	if (n == 1 || m == 1) {
		cout << "YES" << endl;
		return ;
	}

	if (n <= m) {
		cout << "NO" << endl;
		return ;
	}


	for (int i = 2; i * i <= n && i <= m; i++) {

		if ( n % i == 0 ) {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;


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