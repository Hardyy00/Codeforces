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
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
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

	vvi mat(n, vi(n));

	vi ans(n, (1 << 30) - 1);


	REP(i, 0, n - 1) {

		REP(j, 0, n - 1) {

			cin >> mat[i][j];

			if (i == j) continue;

			ans[i] = ans[i] & mat[i][j];
			ans[j] = ans[j] & mat[i][j];
		}
	}

	REP(i, 0, n - 1) {

		REP(j, 0, n - 1) {

			if (i == j) continue;

			if (mat[i][j] != (ans[i]  | ans[j]) ) {
				cout << "NO" << endl;

				return;
			}
		}
	}

	cout << "YES" << endl;
	fauto(i, ans) cout << i << " ";

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