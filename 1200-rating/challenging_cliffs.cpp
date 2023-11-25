#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        int rep = -1;

        for(int i=0;i<n;i++) cin >> v[i];

        sort(v.begin(), v.end());

        int lp = -1;
        int fp  = -1;

        int mini = INT_MAX;

        for(int i=1;i<n;i++) {

            if( (v[i]-v[i-1] )  <  mini) {
                mini = v[i] - v[i-1];
                fp = i-1;
                lp = i;
            }
        }


          
            int l = fp-1;
            int r = lp+1;

            vector<int> ans(n);

            ans[0] = v[fp];
            ans[n-1] = v[lp];
            int it = 1;

            for(int i=r ;i<n;i++) ans[it++] = v[i];
            for(int i=0;i<=l;i++) ans[it++] = v[i];

            for(int i=0;i<n;i++) cout << ans[i] << " ";

            cout << "\n";

        
        
    }
}