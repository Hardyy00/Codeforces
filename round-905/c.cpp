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

	int n, k;
	cin >> n >> k;

	vi v(11);

	int even = 0;
	int odd = 0;

	REP(i, 0, n - 1) {
		int c;
		cin >> c;
		v[c]++;
	}

	int mini = INT_MAX;


	REP(i, 1, 10) {

		if (v[i] > 0) {

			if ((i & 1) == 1) odd += v[i];
			else even += v[i];

			int f = i / k;

			if ((i % k) != 0) f++;

			mini = min(mini , (f * k) - i);

			// cout << i << " " << mini << " " << f << endl;

		}
	}

	if (k == 2) {
		if (even > 0) {
			cout << 0 << endl;
		} else {
			cout << 1 << endl;
		}
	} else if (k == 4) {
		// cout << even << " " << odd << endl;
		if (even > 1) {
			cout << 0 << endl;
		} else if (v[4] != 0 || v[8] != 0) {
			cout << 0 << endl;
		} else {
			if (even == 1) cout << 1 << endl;
			else {
				cout << min(mini, 2) << endl;
			}
		}
	} else {
		cout << mini << endl;
	}



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