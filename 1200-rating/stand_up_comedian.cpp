#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif

    int t;
    cin >> t;

    while (t--) {

        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == 0) {
            cout << 1 << endl;
            continue;
        }

        ll ans = min(b, c) * 2 + a + min(a + 1, abs(b - c) + d);

        cout << max(ans, 1LL) << "\n";
    }
}