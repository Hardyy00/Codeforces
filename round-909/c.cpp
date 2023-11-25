#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    vector<ll> v(n);

    for(int i=0;i<n;i++) cin >>v[i];

    ll sum = 0;
    ll maxi = LONG_MIN;
    for(int i=0;i<n;i++){

        sum += v[i];

        if(i>0 && (((v[i]%2 + v[i-1]%2)) % 2  == 0)){
            sum = v[i];
        }

        maxi = max(maxi , sum);

        if(sum < 0) sum = 0;
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