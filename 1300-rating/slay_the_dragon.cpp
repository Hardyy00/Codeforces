#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(vector<ll> &v, ll sum , int n){

    sort(v.begin(),v.end());

    int q;
    cin >> q;

    for(int i=0;i<q;i++){

        ll d;
        ll a;
        cin >> d >> a;

        ll a1 = LONG_LONG_MAX;
        ll a2 = LONG_LONG_MAX;

        ll in = lower_bound(v.begin(),v.end(),d) - v.begin();

        if(in == n){
            in--; 
        }

        a1 = max(1LL * 0,d-v[in]) + max(1LL * 0,a-(sum-v[in]));

        if(in >0){
            a2 = max(1LL * 0 , d-v[in-1]) + max(1LL * 0, a-(sum-v[in-1]));
        }

        cout << min(a1,a2)  << "\n";

    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;

    vector<ll> v(n);

    ll sum = 0;

    for(int i=0;i<n;i++){

        cin >> v[i];
        sum += v[i];
    }

    solve(v,sum,n);
    
}