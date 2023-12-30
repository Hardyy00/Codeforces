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
typedef long long int lli;
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


void print_vectorll(vl &v) {

	cout << "{ ";

	fauto(i, v) cout << i << ", ";

	cout << " }" << endl;
}


void solve() {

	int n;
	cin >> n;
	vl a(n);
	vl b(n);

	REP(i, 0, n - 1) {

		int v;
		cin >> v;

		if ((i & 1) == 1) {
			a[i] = -v;
			b[i] = v;
		} else {
			a[i] = v;
			b[i] = -v;
		}
	}

	if (n == 1) {
		cout << "NO" << endl;
		return;
	}

	vl p1(n);
	vl p2(n);

	p1[0] = a[0];

	p2[0] = b[0];

	REP(i, 1, n - 1) {

		p1[i] = p1[i - 1] + a[i];
		p2[i] = p2[i - 1] + b[i];
	}

	// print_vectorll(p1);
	// print_vectorll(p2);


	sll s1;
	sll s2;

	bool f = false;

	REP(i, 0, n - 1) {

		if (p1[i] == 0 || p2[i] == 0) {

			cout << "YES" << endl;
			return;
		}

		if (s1.count(p1[i])) {
			f = true;
			break;
		} else s1.insert(p1[i]);


		if (s2.count(p2[i])) {
			f = true;
			break;
		} else s2.insert(p2[i]);
	}

	cout << (f ? "YES"  : "NO") << endl;

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