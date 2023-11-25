#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    vector<ll> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    map<double, int> map;

    for(int i=0;i<n;i++){
        double l = log2(v[i]) - v[i] ;
        map[l]++;
    }

    ll cn = 0;

    for(auto i : map){

        ll f = i.second;
        cn += ((f * (f-1)) /2);
    }

    cout << cn  << endl;
    
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