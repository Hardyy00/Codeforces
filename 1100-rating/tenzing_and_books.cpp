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

void print_map(unordered_map<int, bool> &map) {

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


void solve() {

	ll n, x;

	cin >> n >> x;

	vvll mat(3, vl(n));


	REP(i, 0, 2) {
		REP(j, 0, n - 1) {
			cin >> mat[i][j];
		}
	}

	unordered_map<int, bool> mp;
	int cn = 0;

	REP(i, 0, 30) {

		if ( ((x >> i) & 1) == 1) {
			mp[i] = false;
			cn++;
		}
	}


	REP(i, 0, 2) {


		REP(j, 0, n - 1) {

			if (cn == 0) {
				break;
			}



			ll val = mat[i][j];

			bool f = true;


			REP(k, 0, 30) {

				if ( ((val >> k) & 1 ) == 1 ) {

					if (!mp.count(k)) {
						f = false;
						break;
					}
				}

			}

			if (f) {

				REP(k, 0, 30) {

					if (((val >> k) & 1) == 1) {

						if (mp[k] == false) {
							mp[k] = true;
							cn--;
						}
					}
				}
			} else {
				break;
			}
		}


		if (cn == 0) {
			break;
		}

	}

	if (!cn) {
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