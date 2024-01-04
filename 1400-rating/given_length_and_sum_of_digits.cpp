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

	int m, s;
	cin >> m >> s;

	if (s == 0) {

		if (m == 1) {
			cout << 0 << " " << 0 << endl;
		} else {
			cout << -1 << " " << -1 << endl;
		}
		return;

	}

	if (s > (9 * m) ) {
		cout << -1 << " " << -1 << endl;
		return;
	}

	if (s < m) {

		vi ans(m, 0);
		int sum = 1;
		ans[0] = 1;
		int j = m - 1;

		while (j >= 0 && sum < s) {

			if (ans[j] == 9) {
				j--;
				continue;
			}

			ans[j]++;
			sum++;
		}

		fauto(i, ans) cout << i;

		cout << " ";

		vi b(m, 0);
		int i = 0;
		sum = 0;
		while (i < m && sum < s) {

			if (b[i] == 9) {
				i++;
				continue;
			}

			b[i]++;
			sum++;
		}

		fauto(i, b) cout << i;
		cout << endl;

		return;
	}


	vi ans(m, s / m);


	REPD(i, m - 1, (m - (s % m))) ans[i]++;

	int i = 0;
	int j = m - 1;
	while (i < j) {


		if (i == 0 && ans[i] == 1) {
			i++;
			continue;
		} else if (i > 0 && ans[i] == 0) {
			i++;
			continue;
		}

		if (ans[j] == 9) {
			j--;
			continue;
		}

		ans[i]--;
		ans[j]++;

	}


	fauto(i, ans) {
		cout << i ;
	}

	cout << " ";

	vi b(m, 0);
	i = 0;
	int sum = 0;
	while (i < m && sum < s) {

		if (b[i] == 9) {
			i++;
			continue;
		}

		b[i]++;
		sum++;
	}

	fauto(i, b) cout << i;
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



	solve();




}