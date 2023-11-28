#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()



typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;

const ll MOD = 1e9 + 7;

void pre(sll &set) {

	for (int k = 2; k <= 1000; k++) {

		ll sum = 1 + k;
		ll it = k * k;
		while (sum <= 1e6) {
			sum += it;
			set.insert(sum);
			it *= (ll)k;
		}
	}
}


void solve(sll &s) {

	ll n;
	cin >> n;

	if (s.count(n)) {
		cout << "YES" << endl;
		return ;
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

	sll set;

	pre(set);

	while (t--) {

		solve(set);
	}
}