#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


vector<ll> v;


bool p(ll mid, ll h){

    ll tot = mid;

    ll end = v[0]+mid-1;

    for(int i=1;i<v.size();i++){

        if(v[i]>end){
            end = v[i]+ mid-1;
            tot += mid;
        }else{

            tot -= (end-v[i]+1);
            end = v[i]+mid-1;
            tot += mid;
        }
    }

    return tot>=h;
}

ll bs(ll n, ll h){

    ll low = 0;

    ll high = h;
    ll ans = -1;

    while(low <= high){

        ll  mid = high + (low - high)/2;

        if(p(mid,h)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
}
int main(){

    int t;
    cin >> t;

    while(t--){

        ll n,h;
        cin >> n >> h;

        v.resize(n);

        for(int i=0;i<n;i++) cin >> v[i];

        cout << bs(n,h) << "\n";
    }
}