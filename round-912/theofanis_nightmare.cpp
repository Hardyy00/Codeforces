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

const ll MOD = 1e9 + 7;


void solve() {

	int n;
	cin >> n;

	vl v(n);
	vl suff(n);

	ll sum = 0;
	bool all = true;

	REP(i, 0, n - 1) {
		cin >> v[i];
		if (v[i] >  0) all = false;

		sum += v[i];
	}

	if (all) {

		cout << sum << endl;
		return;
	}

	suff[n - 1] = v[n - 1];

	REPD(i, n - 2, 0) {

		suff[i] = v[i] + suff[i + 1];

	}



	int k = 0;
	ll acc = 0;

	REP(i, 0, n - 1) {

		if (suff[i] >= 0) k++;

		acc += v[i] * k;

	}

	cout << acc << endl;


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