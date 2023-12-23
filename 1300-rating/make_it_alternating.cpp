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

const ll MOD = 998244353;

ll fact(ll diff) {



	ll v = 1;

	REP(i, 2, diff) {
		v = v * 1LL * i;
		v %= MOD;
	}

	return v;
}


void solve() {

	string s;
	cin >> s;

	vi v;

	int cn = 1;
	int n = s.size();

	REP(i, 1, n - 1) {

		if (s[i] == s[i - 1]) cn++;
		else {
			v.PB(cn);
			cn = 1;
		}
	}

	v.PB(cn);

	ll diff =  n - v.size();

	ll mul = 1;
	fauto(i, v) mul = (mul * 1LL * i) % MOD;

	mul *= fact(diff);
	mul %= MOD;


	cout << diff << " " << mul << endl;

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