#include <bits/stdc++.h>

using namespace std;

int dp[21][21];

int lcs(string &s1, string &s2){

    int n = s1.size();
    int m = s2.size();
    memset(dp, 0, sizeof(dp));

    int maxi = 0;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];

                maxi = max(maxi, dp[i][j]);
            }
        }
    }

    return maxi;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        string a;
        string b;
        cin >> a >> b;

        int lcsLength = lcs(a,b);

        cout << (a.size() + b.size() - 2*lcsLength) << "\n";
    }
}