#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n ;
        cin >> n;

        ll l,r;
        cin>> l >>r;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        sort(v.begin(),v.end());

        ll pairs = 0;

        for(int i=0;i<n-1;i++){

            int lb = lower_bound(v.begin()+i+1,v.end(),l-v[i]) - v.begin();
            int ub = upper_bound(v.begin()+i+1, v.end(), r-v[i]) - v.begin()-1;

            pairs += max(ub-lb+1,0);
        }

        cout << pairs <<"\n";

    }
}