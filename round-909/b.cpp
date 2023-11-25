#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll f(int t, vector<ll> &v){

    ll maxi = LONG_LONG_MIN;
    ll mini = LONG_LONG_MAX;
    int n= v.size();

    ll sum = 0;
    int cn = 0;

    for(int i=0;i<n;i++){

        sum += v[i];

        cn++;

        if(cn == t){
            maxi = max(maxi, sum);
            mini = min(mini, sum);
            sum = 0;
            cn = 0;
        }
    }

    return maxi - mini;
}

void solve(){

    int n;
    cin >> n;

    vector<ll> v(n);
    
    for(int i=0;i<n;i++) cin >> v[i];

    if(n==1) {
        cout << 0 << endl;
        return ; 
    }

    vector<int> div;

    for(int i=1;i<=n/2;i++){

        if(((n % i) ==0)){
            div.push_back(i);
        }
    }

    ll maxi = LONG_LONG_MIN;

    for(auto i : div){

        maxi = max(maxi,f(i,v));
    }   

    cout << maxi << "\n";

    
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        
        solve();
    }
}