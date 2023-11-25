#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){

        int n ;
        cin>> n;

        vector<ll> v(n);

        for(int i=0;i<n;i++){
            ll temp;
            cin >> temp;
            v[i] = temp;
        }

        sort(v.begin(), v.end());

        ll pre = v[0];
        ll maxi = v[0];

        for(int i=1;i<n;i++){

            // if(v[i]-pre < maxi) break;

            maxi = max(maxi, v[i]-pre);
            pre += v[i]-pre;
        }

        cout << maxi << "\n";
    }
}