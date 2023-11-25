#include <bits/stdc++.h>

using namespace std;
int dp[101][101];
int N;
int M;

int solve(int i, int j, vector<int> &a, vector<int> &b){

    if(dp[i][j] !=-1) return dp[i][j];

    int first = 0;

    if(i<N){
        first = a[i] + solve(i+1, j, a, b);
    }

    int second = 0;
    if(j< M){
        second = b[j] + solve(i, j+1, a,b);
    }

    return dp[i][j] = max(0, max(first, second));
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        int m;

        cin >> n;
        N = n;

        vector<int> a(n);

        for(int i=0;i<n;i++){

            int temp;
            cin >> temp;

            a[i] = temp;
        }

        cin >> m;
        M = m;

        vector<int> b(m);

        for(int i=0;i<m;i++){

            int temp;
            cin >> temp;

            b[i] = temp;
        }

        memset(dp, -1,sizeof(dp));

        cout << solve(0,0, a, b) << "\n";
    }
}