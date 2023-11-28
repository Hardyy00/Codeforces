#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)


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



void solve(int tc) {

	int n;
	cin >> n;

	vl v(n);

	REP(i, 0, n - 1)cin >> v[i];

	for (int i = 1; i < n - 1; i++) {

		ll diff = v[i - 1] - v[i];
		v[i] += diff;
		v[i + 1] += diff;
	}

	if (v[n - 1] >= v[n - 2]) {

		cout << "YES" << endl;
		return;
	}

	cout << ((n % 2 == 1) ? "YES" : "NO") << endl;








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
	int c = 0;
	while (t--) {
		c++;
		solve(c);
	}
}