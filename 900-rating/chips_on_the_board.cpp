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
	vl a(n);

	vl b(n);

	ll m1 = LLONG_MAX;
	ll m2 = LLONG_MAX;

	REP(i, 0, n - 1) {
		cin >> a[i];
		m1 = min(m1, a[i]);
	}

	REP(i, 0, n - 1) {
		cin >> b[i];
		m2 = min(m2, b[i]);
	}

	ll s1 = 0;
	ll s2 = 0;

	fauto(i, a) {
		s1 += (m2 + i);

	}

	fauto(i, b) {
		s2 += (m1 + i);
	}

	cout << min(s1, s2) << endl;
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