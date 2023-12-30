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

class Triplet {

public:
	int gcd;
	int x;
	int y;
};

Triplet extendedEuclidAlgo(int a, int b) {

	if (b == 0) {

		Triplet ans;
		ans.gcd = a;
		ans.x = 1;
		ans.y = 0;

		return ans;
	}

	Triplet val = extendedEuclidAlgo(b, a % b);
	Triplet ans;

	ans.gcd = val.gcd;
	ans.x = val.y;
	ans.y = val.x - (a / b) * val.y;

	return ans;
}

int mmInverse(int a, int m) {

	Triplet ans = extendedEuclidAlgo(a, m);
	// cout << ans.gcd << endl;
	return ans.x < 0 ? ans.x + m : ans.x;
}


void solve() {

	int x;
	cin >> x;

	int md = x % 111;

	int a = md * mmInverse(11, 111) % 111;

	int b = (x - 11 * a);

	if (b >= 0 && ((x - 11 * a) % 111) == 0 ) {

		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
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