#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()



typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;

const ll MOD = 1e9 + 7;



void solve() {

	int n;
	cin >> n;

	vl a(n);
	vl diff(n);

	ll maxi = LLONG_MIN;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		ll val;
		cin >> val;
		diff[i] = a[i] - val;

		maxi = max(maxi, diff[i]);
	}

	ll cn = 0;

	vi ans;


	for (int i = 0; i < n; i++) {

		if (diff[i] == maxi) ans.PB(i + 1);
	}
	cout << ans.size() << endl;

	for (auto i : ans) cout << i << " ";

	cout << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
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