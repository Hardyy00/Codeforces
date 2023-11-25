#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ll t;
    cin >> t;
    while(t--){

        ll n,x,t;

        cin >> n >> x >> t;

        ll ans = 0;
        ll gap = t/x;

        while(n>1){
            ans += min(n-1,gap);
            n--;
        }

        cout << ans << "\n";

    }
}