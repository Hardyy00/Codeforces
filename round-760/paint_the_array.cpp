#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(vector<ll> &v, int n){

    ll ge= v[0];
    ll go =v[1];

    for(ll i=2;i<n;i++){

        if((i&1)==0){
            ge = __gcd(ge, v[i]);
        }else{

            go = __gcd(go, v[i]);
        }
    }

    if(ge == go) return 0;

    bool ef = true;
    bool of = true;
    
    for(int i=0;i<n;i++){

        if((i&1)==1 && v[i] % ge ==0) ef = false;
        else if( (i &1)==0 && v[i] % go ==0) of = false;
    }

    if(!(ef || of)) return 0 ;

    if(ef) return ge;

    return go;
}

int main(){

    int t;
    cin>> t;

    while(t--){

        int n;
        cin >> n;

        vector<ll> v(n);

        for(int i=0;i<n;i++) cin >> v[i];


        cout << solve(v,n) << "\n";
    }
}