#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;
    cin>> t;
    
    while(t--){

        ll n,k;
        cin >> n >> k;

        ll od = k /(n-1);

        if(k % (n-1) == 0) k--;

        ll tot = n * od;

        ll ans= tot + (k - (tot-od));

        cout << ans << "\n";

    }
}