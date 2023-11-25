#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin>> n;

        vector<ll> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        ll ns = 0;
        ll ps = 0;
        bool nsf = true;
        bool psf = true;
        ll mn = LONG_MIN;
        ll mp = LONG_MIN;

        for(auto i : v){

            // negative
            if(nsf){

                if(i<0) mn = max(mn,i);
                else {
                    ns += mn;
                    mn=  LONG_MIN;
                    nsf = false;
                    mn = max(mn,i);
                }
            }else{

                if(i>0) mn = max(mn, i);
                else{
                    ns+=mn;
                    mn= LONG_MIN;
                    nsf = true;
                    mn=max(mn,i);
                }
            }

            // positive

            if(!psf){

                if(i<0) mp = max(mp,i);
                else {
                    ps += mp;
                    mp =  LONG_MIN;
                    psf = true;
                    mp = max(mp,i);
                }
            }else{

                if(i>0) mp = max(mp, i);
                else{
                    ps+= mp;
                    mp= LONG_MIN;
                    psf = false;
                    mp=max(mp,i);
                }
            }

        }

        ns += mn;
        ps += mp;

        cout << max(ns, ps) << "\n";

    }
}