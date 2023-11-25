#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {

	int n;
	cin >> n;

	vector<ll> even;
	vector<ll> odd;

	ll neg = true;
	ll maxi = LLONG_MIN;

	for (int i = 0; i < n; i++) {

		ll v;
		cin >> v;
		if (v >= 0) neg = false;
		maxi = max(maxi, v);

		if ((i & 1) == 1) odd.push_back(v);
		else even.push_back(v);
	}

	if (neg) {
		cout << maxi << endl;
		return;
	}

	ll s1 = 0;
	ll s2 = 0;

	for (auto i : even) if (i >= 0) s1 += i;

	for (auto i : odd ) if (i >= 0) s2 += i;

	cout << max( s1, s2) << endl;


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