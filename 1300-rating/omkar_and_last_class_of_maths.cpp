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


void solve() {


	ll n;
	cin >> n;

	if (n == 2) {
		cout << 1 << " " << 1 << endl;
		return;
	}

	int a1 = 0;
	int a2 = 0;

	ll mini = LLONG_MAX;

	for (int i = 2; i * i <= n; i++) {

		if (n % i == 0) {


			int rem = n / i;
			int f = i;
			int s = f * (rem - 1);

			ll prod = (f * 1LL * s);
			ll gc = __gcd(f, s);
			ll lcm = prod / gc;

			if (lcm < mini) {
				mini = lcm;
				a1 = f;
				a2 = s;
			}

		}

		if ((n % (n / i)) == 0) {


			int rem = n / (n / i);
			int f = n / i;
			int s = f * (rem - 1);

			ll prod = (f * 1LL * s);
			ll gc = __gcd(f, s);
			ll lcm = prod / gc;

			if (lcm < mini) {
				mini = lcm;
				a1 = f;
				a2 = s;
			}
		}
	}


	if (a1 == 0 && a2 == 0) {
		a1 = 1;
		a2 = n - 1;
	}

	cout << a1 << " " << a2 << endl;
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