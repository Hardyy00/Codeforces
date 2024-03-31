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

void print_vector(vl &v) {

	cout << "{ ";

	fauto(i, v) cout << i << ", ";

	cout << " }" << endl;
}

void print_set(sll &s) {

	cout << "{ " ;

	fauto(i, s) cout << i << ", ";

	cout << " } " << endl;
}

int bs(ll l, ll u, vl &v, vl &pre, vl &s) {

	ll ans = 0;
	ll save = l;

	ll low = l - 1;
	ll high = pre.size() - 2;

	ll rm = low - 1 > -1 ? (u * 1ll * s[low - 1]) - pre[low - 1] + s[low - 1] : 0;
	cout << rm << endl;
	while (low <= high) {

		ll mid = (low + high) >> 1;

		ll a = (u * 1ll * s[mid]) - pre[mid] + s[mid]  - rm;
		ll b = (u * 1ll * s[mid + 1]) - pre[mid + 1] + s[mid + 1] - rm;


		cout << mid << " " << ((u * 1ll * s[mid]) - pre[mid] + s[mid]) << " " << a << " " << b << endl;
		if (a < b ) {
			ans = mid + 1;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return ans + 1;


}
void solve() {

	ll n;
	cin >> n;

	vl v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vl s(n);
	vl pre(n);

	pre[0] = (v[0] * 1ll * (v[0] + 1)) / 2;
	s[0] = v[0];

	for (int i = 1; i < n; i++) {

		s[i] = s[i - 1] + v[i];
		pre[i] = (s[i] * 1ll * (s[i] + 1)) / 2;
	}

	ll q;
	cin >> q;

	print_vector(pre);
	print_vector(s);


	while (q-- > 0) {
		ll l, u;
		cin >> l >> u;


		cout << bs(l, u, v, pre, s) <<  " ";
	}

	cout << endl;
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