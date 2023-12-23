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
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;
typedef stack<int> sti;
typedef stack<long long> stll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<long long, long long>> vpll;
typedef priority_queue<int> pqi;
typedef priority_queue<pair<int, int>> pqpii;

const ll MOD = 1e9 + 7;


void solve() {


	vvi v(9, vi(9));


	REP(i, 0, 8) {
		string s;
		cin >> s;
		REP(j, 0, 8) {
			v[i][j] = s[j] - '0';

		}
	}

	v[0][0] = v[0][0] == 5 ? 9 : 10 - v[0][0];
	v[1][3] = v[1][3] == 5 ? 9 : 10 - v[1][3];
	v[2][6] = v[2][6] == 5 ? 9 : 10 - v[2][6];
	v[3][1] = v[3][1] == 5 ? 9 : 10 - v[3][1];
	v[4][4] = v[4][4] == 5 ? 9 : 10 - v[4][4];
	v[5][7] = v[5][7] == 5 ? 9 : 10 - v[5][7];
	v[6][2] = v[6][2] == 5 ? 9 : 10 - v[6][2];
	v[7][5] = v[7][5] == 5 ? 9 : 10 - v[7][5];
	v[8][8] = v[8][8] == 5 ? 9 : 10 - v[8][8];

	fauto(i, v) {
		fauto(j, i) cout << j;

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