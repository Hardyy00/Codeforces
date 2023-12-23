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

bool comp(pii &p1, pii &p2) {

	if (p1.S == p2.S) {

		return p1.F < p2.F;
	}

	return p1.S < p2.S;
}

int bs(int l, int h, vpii &v) {

	int tar = h + 1;
	int low = 0;
	int high = v.size() - 1;
	int ans = -1;


	while (low <= high) {

		int mid = (low + high) >> 1;


		if (v[mid].S < tar) low = mid + 1;
		else if (v[mid].S > tar) high = mid - 1;
		else  {
			if (v[mid].F >= l) ans = v[mid].F + 1;
			low = mid + 1;
		}
	}

	// cout << "L : " << l << " h : " << h << " ans : " << ans << endl;

	return ans;
}


void solve() {

	int n, q;
	cin >> n >> q;

	vpii v(q);

	REP(i, 0, q - 1) {

		int a, b;
		cin >> a >> b;

		if (a > b) swap(a, b);

		v[i] = {a, b};
	}

	sort(all(v), comp);

	int si = 1;
	int ei = 2;

	ll cn = 1;

	while (ei <= n) {

		int ns = bs(si, ei - 1, v);

		// cout << ei << " " << ns << endl;

		if (ns >= si) {
			si = ns;
		}

		// cout << ei << " " << si << " " << cn << endl;
		cn += (ei - si + 1);


		ei++;
	}



	// cout << bs(1, 1, v) << endl;

	// cout << ((0) >> 1) << endl;
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