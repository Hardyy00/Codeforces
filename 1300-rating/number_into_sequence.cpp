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

	vl v;

	mll map;



	for (ll i = 2; i * i <= n; i++) {

		while (n % i == 0) {
			v.PB(i);
			n /= i;
			map[i]++;
		}
	}


	if (n > 1) {
		v.PB(n);
		map[n]++;
	}

	vl ans;

	if (v.size() == 1) {
		ans.PB(n);
	} else {

		ll maxi = 0;
		ll num = 0;

		fauto(i, map) {


			if (i.S > maxi) {
				maxi = i.S;
				num = i.F;
			}
		}

		for (int i = 1; i <= maxi - 1; i++) {
			ans.PB(num);
		}

		ll mul = num;

		fauto(i, map) {

			if (i.F == num) continue;

			mul *= 1LL * pow(i.F, i.S);
		}

		ans.PB(mul);

	}

	cout << ans.size() << endl;
	fauto(i , ans) cout << i << " ";

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