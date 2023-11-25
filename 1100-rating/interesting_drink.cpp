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

    sort(v.begin(),v.end());

    int q;
    cin>> q;

    while(q--){

        ll val;
        cin>> val;

        int in = upper_bound(v.begin(),v.end(),val) - v.begin();

        cout << in << " " << endl;
    }
    
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}