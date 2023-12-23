#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)


typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;
typedef stack<int> sti;
typedef stack<long long> stll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<long long, long long>> vpll;
typedef priority_queue<int> pqi;
typedef priority_queue<pair<int, int>> pqpii;

const ll MOD = 1e9 + 7;

ll findFactors(ll n) {

	if (n == 1) return 1;
	if (n == 2 || n == 3) return 2;

	ll mul = 1;

	for (ll i = 2; i * i <= n; i++) {

		int cn = 0;
		while (n % i == 0) {
			cn++;
			n /= i;
		}


		mul *= (cn + 1);
	}

	if (n > 1) {
		mul *= 2;
	}


	return mul;
}
void solve() {

	int n;
	cin >> n;

	vl v(n);

	REP(i, 0, n - 1) cin >> v[i];

	if (n == 1) {

		cout << findFactors(v[0]);
		return;

	}

	ll g = __gcd(v[0], v[1]);

	REP(i, 2, n - 1) {
		g = __gcd(g, v[i]);
	}


	cout << findFactors(g) << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);



	solve();




}