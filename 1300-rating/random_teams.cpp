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

	ll n, m;
	cin >> n >> m;

	ll mini = 0;
	ll maxi = 0;

	if ( n % m == 0) {
		ll s = n / m;
		mini = m * ((s * (s - 1)) / 2);
	} else {

		ll s = n / m;
		ll rem = n % m;
		ll a = rem * ((s * (s + 1)) / 2);
		ll b = (m - rem) * ((s * (s - 1)) / 2);

		mini = a + b;
	}

	ll s = n - (m - 1);
	maxi = (s * (s - 1)) / 2;

	cout << mini << " " << maxi << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int t;
	// cin >> t;

	// while (t--) {

	solve();
	// }
}