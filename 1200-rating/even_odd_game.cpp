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

        int n;
        cin >> n;

        vector<ll> e;
        vector<ll> o;

        for (int i = 0; i < n; i++) {

            ll val;
            cin >> val;

            if ((val & 1) == 1) o.push_back(val);
            else e.push_back(val);
        }

        sort(e.begin(), e.end());
        sort(o.begin(), o.end());

        ll a = 0;
        ll b = 0;

        bool trn = true;

        while (!e.empty() && !o.empty()) {


            if (trn) {

                if (e.back() > o.back()) {
                    a += e.back();
                    e.pop_back();
                } else {
                    o.pop_back();
                }
            } else {

                if (o.back() > e.back()) {
                    b += o.back();
                    o.pop_back();
                } else {

                    e.pop_back();
                }
            }

            trn = !trn;
        }

        while (!e.empty()) {

            if (trn) {
                a += e.back();
            }

            e.pop_back();
            trn = !trn;
        }

        while (!o.empty()) {

            if (!trn) {
                b += o.back();
            }

            o.pop_back();
            trn = !trn;
        }

        if (a > b) cout << "Alice" << "\n";
        else if (a < b) cout << "Bob" << "\n";
        else cout << "Tie" << "\n";

    }


}