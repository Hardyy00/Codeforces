#include <bits/stdc++.h>

using namespace std;

string solve(vector<int> &v, string &s, int n){

    vector<int> b;
    vector<int> r;

    for(int i=0;i<n;i++){

        if(s[i]=='B') b.push_back(v[i]);
        else r.push_back(v[i]);
    }

    sort(b.begin(),b.end());
    sort(r.begin(),r.end());

    int cn = 1;

    for(auto i : b){

        if(i < cn) return "NO";

        cn++;
    }

    for(auto i : r){

        if(i > cn) return "NO";

        cn++;
    }

    return "YES";
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin>> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        string s;
        cin >> s;

        cout << solve(v,s,n) <<"\n";
    }
}