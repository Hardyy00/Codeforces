#include <bits/stdc++.h>

using namespace std;

string solve(vector<string> &v, int n){

    if(v.size()==1) return v[0] + "a";

    string s = "";

    s+= v[0][0];

    for(int i=1;i<n;i++){
        if(v[i-1][1] != v[i][0]) s+= v[i-1][1];

        s+= v[i][0];
    }

    s += v[n-1][1];

    if(s.size()==n+2) return s;

    s+='a';
    return s;
    
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<string> v(n-2);

        for(int i=0;i<n-2;i++) cin >> v[i];

        cout << solve(v,n-2) << "\n";
    }
}