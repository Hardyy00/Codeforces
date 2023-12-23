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
typedef vector<vector<long long>> vvll;
typedef vector<vector<int>> vvi;
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


void solve() {

    int n, x;
    cin >> n >> x;

    if (x == 1) {
        REP(i, 1, n) cout << i << " ";
        cout << endl;
        return;
    }

    if (x == n) {
        REPD(i, n, 1) cout << i <<  " ";
        cout << endl;
        return;
    }

    if ((n & 1) == 1) {

        if (!(x == 1 || x == n)) {
            cout << - 1 << endl;
        } else {

            if (x == 1) {
                REP(i, 1, n) cout << i << " ";
                cout <<  endl;
            } else {
                REPD(i, n, 1) cout << i << " ";
                cout << endl;
            }
        }

        return;
    }

    int mid = n / 2;

    if ((x == mid) || (x == (mid + 1))) {
        if (x == mid) {
            REPD(i, x, 1) cout << i << " ";

            REPD(i, n, x + 1) cout << i << " ";
            cout << endl;
        } else {

            REP(i, x, n) cout << i << " ";
            REP(i, 1, x - 1) cout << i << " ";

            cout << endl;
        }
        return;
    }

    cout << -1 << endl;




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