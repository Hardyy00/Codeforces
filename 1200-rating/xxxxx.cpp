#include <bits/stdc++.h>

using namespace  std;

int solve(vector<int> &v, int x, int n){

    int maxLen = -1;
    int s1 = 0;
    int s2 = 0;

    for(int i=1;i<=n;i++){
        s1 += v[i-1];
        s2 += v[n-i];

        if(s1 % x != 0 || s2 % x != 0) maxLen = i; 
    }

    return maxLen;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin  >> n;
        int x;
        cin >> x;

        vector<int> v(n);

        for(int i=0;i< n;i++) cin >> v[i];

        cout << solve(v,x,n) << "\n";
    }
}