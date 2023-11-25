#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){

    ll l, b, a;

    cin >> l >> b >> a;

    ll x = l%a == 0 ? l/a : (l/a) + 1;

    ll y = b%a == 0 ? b/a : (b/a) + 1;

    cout << x*y << "\n";
}