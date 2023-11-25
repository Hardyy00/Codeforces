#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool solve(ll a,ll b, ll d ){

    if(abs(a-b) <=d) return true;

    ll mini= min(a,b);
    ll maxi = a + b - mini;

    int p = maxi / (d+1);

    if(maxi % (d+1) != 0) p++;

    return p <= mini;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        ll a, b,d;
        cin >> a >> b >> d;

        cout << (solve(a, b,d) ? "YES" : "NO") << "\n";
    }
}