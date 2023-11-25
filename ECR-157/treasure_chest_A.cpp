#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;

    cin >> t;

    while(t--){

        ll x,y, k;

        cin >> x >> y >> k;

        if(x >=y) {
            cout << x << "\n";
        }

        else if(x+k < y){
            ll ans = x + k + ((y-(x+k)) * 2);
            cout << ans << "\n";
        }else if(x + k >= y){
            cout << y << "\n";
        }
    }
}