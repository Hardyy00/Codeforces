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

	int n;
	cin >> n;

	vl v(n, 0LL);

	ll num = 0LL;

	REP(i, 0, n - 1) {

		int k;
		cin >> k;

		REP(j, 0, k - 1) {
			int a;
			cin >> a;
			a--;
			v[i] =  v[i] | (1LL << a);

		}

		num = num | v[i];
	}


	ll cn = 0LL;
	REP(i, 0, 49) {

		if (((num >> i) & 1) == 1) {

			ll temp = 0LL;

			REP(j, 0, n - 1) {

				if (((v[j] >> i) & 1) == 0) {

					temp = temp | v[j];
				}
			}

			cn = max(cn, 1LL * __builtin_popcountll(temp));
		}
	}

	cout << cn << endl;

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