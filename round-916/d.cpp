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
typedef vector<char> vc;
typedef vector<vector<long long>> vvll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef unordered_set<long long> usll;
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
	vector<vpll> v(3, vpll(n));

	REP(i, 0, 2) {

		REP(j, 0, n - 1) {
			int val;
			cin >> val;
			v[i][j] = MP(val, j + 1);
		}

		sort(all(v[i]), greater<pll>());
	}

	// REP(i, 0, 3) {

	// 	REP(j, 0, n - 1) cout << v[i][j].F << " ";

	// 	cout << endl;
	// }

	ll maxi = 0;

	REP(i, 0, 2) {

		REP(j, 0, 2) {

			REP(k, 0, 2) {

				if ((v[0][i].S != v[1][j].S) && (v[0][i].S != v[2][k].S) && (v[1][j].S != v[2][k].S) ) {
					maxi = max(maxi, v[0][i].F + v[1][j].F + v[2][k].F);
				}
			}
		}
	}

	cout << maxi << endl;
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