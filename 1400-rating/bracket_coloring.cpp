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



void solve() {

	int n;
	cin >> n;

	string s;
	cin >> s;

	if ((n & 1) == 1) {
		cout << -1 << endl;
		return;
	}

	stack<pair<char, int>> st;

	vi ans(n);

	int f = 0;
	REP(i, 0, n - 1) {

		if (s[i] == '(') st.push(MP('(', i));
		else {

			if (st.empty()) st.push(MP(')', i));
			else if (st.top().F == '(') {
				f = 1;
				ans[st.top().S] = ans[i] = 1;
				st.pop();
			} else {
				st.push(MP(')', i));
			}
		}
	}

	// print_vector(ans);
	int l = f;

	vector<pair<char, int>> v;

	while (!st.empty()) {
		v.PB(st.top());
		st.pop();
	}


	int len = v.size();
	f = 0;
	REP(i, 0, len - 1) {

		if (v[i].F == '(') {
			st.push(v[i]);
		} else {

			if (st.empty()) {
				cout << -1 << endl;
				return;
			} else if (st.top().F == '(') {
				f = 1;
				ans[st.top().S] = ans[v[i].S] = l + 1;
				st.pop();
			} else {
				cout << -1 << endl;
				return;
			}
		}
	}

	if (!st.empty()) {
		cout << -1 << endl;
		return;
	}

	l += f;

	int t = l;

	reverse(all(s));
	vi a2(n);
	f = 0;
	REP(i, 0, n - 1) {

		if (s[i] == '(') st.push(MP('(', i));
		else {

			if (st.empty()) st.push(MP(')', i));
			else if (st.top().F == '(') {
				f = 1;
				a2[st.top().S] = a2[i] = 1;
				st.pop();
			} else {
				st.push(MP(')', i));
			}
		}
	}

	if (st.empty()) {
		cout << 1 << endl;
		fauto(i, a2) cout << i << " ";
		cout << endl;
	} else {

		cout << t << endl;
		fauto(i, ans) cout << i << " ";
		cout << endl;
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