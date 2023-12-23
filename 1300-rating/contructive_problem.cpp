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

int mex(vi &v) {

	umii mp;

	fauto(i, v) {

		if (!mp.count(i)) mp[i]++;
	}


	for (int i = 0;; i++) {

		if (!mp.count(i)) return i;
	}

	return 0;
}


void solve() {

	int n;
	cin >> n;

	vi v(n);
	mii mp;

	REP(i, 0, n - 1) {
		cin >> v[i];

		mp[v[i]]++;
	}

	if (n == 1) {
		cout << (v[0] != 0 ? "YES" : "NO") << endl;
		return;
	}

	int m = mex(v);

	// m+1 positions
	int fp = -1, sp = -1;
	int gt = -1;

	REP(i, 0, n - 1) {

		if (v[i] == m + 1) {

			if (fp == -1) fp = i;

			sp = i;
		}
		if (v[i] > m + 1) gt = i;
	}

	if (fp != -1) {
		REP(i, fp, sp) {

			v[i] = m;
		}


		int m2 = mex(v);
		cout << (m2 == m + 1 ? "YES" : "NO") << endl;
		return;
	}

	// greater

	if (gt != -1) {
		v[gt] = m;

		int m2 = mex(v);
		cout << (m2 == m + 1 ? "YES" : "NO") << endl;
		return;

	}

	int p = -1;

	for (int i = 0; i < n; i++) {

		if (mp[v[i]] > 1) {
			p = i;
			break;
		}
	}

	if (p == -1) {
		cout << "NO" << endl;
		return;
	}

	v[p] = m;

	int m2 = mex(v);
	cout << (m2 == m + 1 ? "YES" : "NO") << endl;




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