#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

        int n , q, k;
        cin >> n >> q >> k;

        if(n==1) {
            
            for(int i=0;i<q;i++){
                cout << k-1 << "\n";
            }
            return 0;
            
        }

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];


        vector<pair<ll,pair<ll,ll>>> pre(n, {0,{0,0}});

        pre[0].second.first = v[0]-1;
        pre[0].second.second = v[1]-v[0]-1;
        pre[0].first = pre[0].second.first + pre[0].second.second;

        for(int i=1;i<n;i++){

            if(i==n-1){

                pre[i].first = pre[i-1].first;
                pre[i].second.first = v[i] - v[i-1] -1;
                pre[i].second.second = k-v[i];
                pre[i].first += pre[i].second.first + pre[i].second.second;

            }else{
                pre[i].first = pre[i-1].first;

                pre[i].second.first = v[i]-v[i-1]-1;
                pre[i].second.second = v[i+1] - v[i] -1;
                pre[i].first += pre[i].second.first + pre[i].second.second;
            }
        }

        for(int i=0;i<q;i++){

            int l,r;
            cin >> l >> r;

            l--;
            r--;

            ll ans= pre[r].first;
            
            if(l-1>=0) ans -= pre[l-1].first;

            ans -= pre[r].second.second;
            ans -= pre[l].second.first;

            ans += k-v[r];
            ans += v[l]-1;

            cout << ans << "\n";
        


    }
}