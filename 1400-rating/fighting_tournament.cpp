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


void solve() {

	int n, q;
	cin >> n >> q;

	vi v(n + 1);

	REP(i, 1, n) cin >> v[i];

	vi l(n + 1);
	vi r(n + 1);

	l[1] = 1;

	REP(i, 2, n) {

		l[i] = v[l[i - 1]] > v[i] ? l[i - 1] : i;
	}


	stack<int> stack;

	REPD(i, n, 1) {

		while (!stack.empty() && v[stack.top()] < v[i]) {
			stack.pop();
		}

		r[i] = stack.empty() ? i : stack.top();

		stack.push(i);
	}

	// print_vector(l);
	// print_vector(r);



	REP(i, 0, q - 1) {

		int in, rou;
		cin >> in >> rou;

		if (l[in] != in) {
			cout << 0 << endl;
			continue;
		} else if (v[in] == n) {
			cout << max(0, rou - max(in - 2, 0)) << endl;
		} else {

			int c = 0;
			rou -= max(in - 2, 0);

			if (rou <= 0) {
				cout << 0 << endl;
				continue;
			}

			int rem = r[in] - in;
			if (in == 1) rem--;

			cout << min(rem, rou) << endl;
		}
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