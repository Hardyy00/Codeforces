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

int len(int n) {

	return floor(log10(n)) + 1;
}

void solve() {

	int n;
	cin >> n;

	mii map;

	REP(i, 0, n - 1) {
		int val;
		cin >> val;

		map[val]++;

	}

	REP(i, 0, n - 1) {
		int val;
		cin >> val;

		map[val]--;

	}

	vi a;
	vi b;

	fauto(i, map) {

		if (i.S > 0) {
			REP(j, 0, i.S - 1) {
				a.PB(i.F);
			}
		} else if (i.S < 0) {
			int f = -i.S;
			REP(j, 0, f - 1) {
				b.PB(i.F);
			}
		}
	}

	if (a.size() == 0 && b.size() == 0) {

		cout << 0 << endl;
		return;
	}

	int cn = 0;

	map.clear();

	n = a.size();

	REP(i, 0, n - 1) {

		if (a[i] < 10) {
			map[a[i]]++;
		} else {
			cn++;
			map[len(a[i])]++;
		}

		if (b[i] < 10) {
			map[b[i]]--;
		} else {

			cn++;
			map[len(b[i])]--;
		}
	}


	vi a1;
	vi b1;

	fauto(i, map) {


		if (i.S > 0) {
			REP(j, 0, i.S - 1) {
				a1.PB(i.F);
			}
		} else if (i.S < 0) {
			int  f = -i.S;
			REP(j, 0, f - 1) {
				b1.PB(i.F);
			}
		}
	}

	if (a1.size() == 0 && b1.size() == 0) {
		cout << cn << endl;
		return;
	}

	n = a1.size();

	REP(i, 0, n - 1) {

		if (a1[i] != 1) cn++;

		if (b1[i] != 1) cn++;
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