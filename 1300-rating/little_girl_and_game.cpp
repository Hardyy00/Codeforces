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

	string s;
	cin >> s;

	int n = s.size();

	vector<int> v(26, 0);

	fauto(i, s) v[i - 'a']++;

	char ch = 'F';
	int it = 0;

	while (true) {

		int od = 0;
		int ev = 0;
		int si = 0;

		it++;

		fauto(i, v) {
			if (i == 0) continue;

			if ((i & 1) == 1) od++;
			else ev++;

			si += i;
		}

		if (si % 2 == 0) {

			if (od == 0) {
				cout << (ch == 'F' ? "First" : "Second") << endl;
				return;
			} else {

				if (ev > 0) {

					REP(i, 0, 25) {

						if (v[i] != 0 && v[i] % 2 == 0) {
							v[i]--;
							break;
						}
					}
				}
				else {

					REP(i, 0, 25) {
						if (v[i] > 0) {
							v[i]--;
							break;
						}
					}
				}
			}
		} else if (si % 2 != 0) {

			if (od == 1) {
				cout << (ch == 'F' ? "First" : "Second") << endl;
				return;
			} else {

				if (od > 0) {

					REP(i, 0, 25) {

						if (v[i] % 2 != 0) {
							v[i]--;
							break;
						}
					}
				}
				else {

					REP(i, 0, 25) {
						if (v[i] != 0 && v[i] % 2 == 0) {

							v[i]--;
							break;
						}

					}
				}

			}
		}

		ch = ch == 'F' ? 'S' : 'F';
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