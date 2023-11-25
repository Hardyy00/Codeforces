#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &v, int n){

    bool f = true;

    for(int i=1;i<n;i++){

        if(v[i] != v[i-1]){
            f = false;
            break;
        }
    }

    if(f) {
        cout << "NO" <<"\n";
        return;
    }

    unordered_map<int, vector<int>> map;

    for(int i=0;i<n;i++) {

        map[v[i]].push_back(i+1);
    }

    vector<vector<int>> ad;

    for(auto i : map) ad.push_back(i.second);

    cout << "YES" <<"\n";

    for(int i=1;i<ad.size();i++){

        for(auto it : ad[i]) cout << ad[i-1][0] << " " <<it << "\n";
        
    }

    int ls = ad[ad.size()-1][0];

    for(int i=1;i<ad[0].size();i++){

        cout << ad[0][i] << " " << ls <<"\n";
    }



}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        solve(v,n);

    }
}