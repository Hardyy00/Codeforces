#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    vector<ll> kUtil;
    sort(v.begin(), v.end());

    for(int i=1;i<n;i++){

        if(v[i]-v[i-1] > x) {

            ll kUsed = (v[i]-v[i-1])/x;

            if((v[i]-v[i-1]) %x == 0) kUsed--;

            kUtil.push_back(kUsed);
        }
    }

    sort(kUtil.begin(), kUtil.end());

    ll used = 0;

    ll g = 1;

    for(int i=0;i<kUtil.size();i++){

        if(used + kUtil[i] <= k){
            used += kUtil[i];
        }else{
            g += (kUtil.size() - i);
            break;
        }
    }

    cout << g << "\n";

}