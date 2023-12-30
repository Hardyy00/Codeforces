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

int bs(vi &v, int tar, int low, int high) {
	int ans = -1;

	while (low <= high) {

		int mid = (low + high ) >> 1;

		if (v[mid] <= tar) {
			ans = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return ans;
}
bool p(int k, vi &v) {

	int i = 0;
	int j = v.size() - 1;
	int c = k;


	while (i <= j && c > 0) {

		int rm = bs(v, c, i, j);
		if (rm == -1) return false;

		j = rm - 1;
		i++;
		c--;

	}

	return c == 0;
}


void solve() {

	int n;
	cin >> n;

	vi v(n);

	REP(i, 0, n - 1) cin >> v[i];

	sort(all(v));

	int low = 0;
	int high = n;
	int ans = 0;

	while (low <= high) {

		int mid = (low + high) >> 1;

		if (p(mid, v)) {
			ans = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}

	}

	cout << ans << endl;
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