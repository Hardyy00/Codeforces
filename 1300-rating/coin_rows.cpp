#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<vector<int>> v(2, vector<int>(n));

        for(int i=0;i<2;i++){

            for(int j=0;j<n;j++) cin >> v[i][j];
        }

        if(n==1) {
            cout << 0 <<"\n";
            continue;
        }


        vector<int> r1(n);
        r1[n-1] = v[0][n-1];
        for(int i=n-2;i>=1;i--){
            r1[i] += v[0][i] + r1[i+1];
        }

        vector<int> r2(n);
        r2[0] = v[1][0];

        for(int i=1;i<n-1;i++){
            r2[i] += v[1][i]  + r2[i-1];
        }



        int mini = INT_MAX;


        for(int i=0;i<n;i++){

            int pre = 0;
            int suff = 0;

            if(i-1 > -1) pre = r2[i-1];
            if(i+1 < n) suff = r1[i+1];

            mini = min(mini, max(pre,suff));


        }

        cout << mini <<"\n";

    }
}