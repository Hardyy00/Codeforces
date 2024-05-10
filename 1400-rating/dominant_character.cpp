#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>


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

void print_set(sll &s) {

	cout << "{ " ;

	fauto(i, s) cout << i << ", ";

	cout << " } " << endl;
}

bool slide(string &s, ll k) {

	vl fre(3, 0);
	ll n = s.size();

	REP(i, 0, k - 1) {

		fre[s[i] - 'a']++;
	}

	if (fre[0] > fre[1] && fre[0] > fre[2]) {

		return true;
	}

	REP(i, k, n - 1) {


		fre[s[i - k] - 'a']--;

		fre[s[i] - 'a']++;

		if (fre[0] > fre[1] && fre[0] > fre[2]) {
			return true;
		}

	}

	return false;




}


void solve() {

	ll n;
	cin >> n;

	string s;
	cin >> s;

	bool ad = false;
	bool gap = false;
	bool fr = false;

	REP(i, 0, n - 1) {

		if (i + 1 < n && s[i] == s[i + 1] && s[i] == 'a') {
			ad = true;
		}

		if (i + 2 < n && s[i] == s[i + 2] && s[i] == 'a') {
			gap = true;
		}
	}

	if (ad) {
		cout << 2 << endl;
		return;
	} else if (gap) {
		cout << 3 << endl;
		return;
	}


	if (n >= 4 && slide(s, 4)) {
		cout << 4 << endl;
		return;
	} else if (n >= 7 && slide(s, 7)) {
		cout << 7 << endl;
		return;
	}



	cout << -1 << endl;



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