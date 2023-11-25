#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



void solve() {

    int n;
    cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {

        ll val;
        cin >> val;

        v[i] = val - v[i];
    }

    sort(v.begin(), v.end());

    int i = 0;
    int j = n - 1;

    int ans = 0;

    while (i < j) {

        if (v[i] + v[j] >= 0) {
            ans++;
            i++;
            j--;
        } else {
            i++;
        }
    }

    cout << ans << endl;



}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t ;

    while (t--) {

        solve();
    }
}