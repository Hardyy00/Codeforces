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

void print_map(mii &map) {

	cout << "{ ";
	fauto(i, map) {

		cout << "{ " << i.F << " : " << i.S << " }, ";
	}

	cout << " }" << endl;
}

void print_vector(vi &v) {

	cout << "{ ";

	fauto(i, v) cout << i << ", ";

	cout << " }" << endl;
}


void solve() {

	int n;
	ll x, y;
	cin >> n >> x >> y;

	string s1;
	string s2;
	cin >> s1 >> s2 ;

	vi v;

	REP(i, 0, n - 1) {
		if (s1[i] != s2[i]) v.PB(i);
	}

	if ((v.size() & 1) == 1) {
		cout << -1 << endl;
		return;
	}

	if (v.size() == 0) {
		cout << 0 << endl;
		return;
	}

	if ((v.size() == s1.size())) {

		if (s1.size() == 2) cout << x << endl;
		else {
			cout << (v.size() / 2) * 1LL * y << endl;
		}

		return;
	}

	if (v.size() == 2 ) {

		if (v[0] + 1 == v[1]) {
			if (2 * y < x) cout << 2 * 1LL * y << endl;
			else {
				cout << x << endl;
			}
		} else {
			cout << y << endl;
		}

		return;
	}

	cout << (v.size() / 2) * 1LL * y << endl;



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