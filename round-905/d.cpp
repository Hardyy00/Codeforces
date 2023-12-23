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


void pr(map<pair<int, int>, int> &mp) {

	fauto(i, mp) {

		cout << "{ { " << i.F.F << " , " << i.F.S << " } , " << i.S << " } ";
	}
	cout << endl;
}

void solve() {

	int n ;
	cin >> n;

	multiset<int, greater<int> > left;
	multiset<int> right;

	REP(i, 0, n - 1) {

		char ch;
		int l, r;
		cin >> ch >> l >> r;

		if (ch == '+') {
			left.insert(l);
			right.insert(r);
		} else {

			left.erase(left.find(l));
			right.erase(right.find(r));
		}

		if (!left.empty()) {
			int minR  = *right.begin();
			int maxL = *left.begin();

			cout << ((minR < maxL) ? "YES" : "NO") << endl;
		} else {
			cout << "NO" << endl;
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



	solve();




}