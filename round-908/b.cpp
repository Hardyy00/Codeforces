#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(int n){

    unordered_map<int,vector<int>> map;

    for(int i=0;i<n;i++){
        int v;
        cin >> v;
        map[v].push_back(i);
    }

    int cn = 0;
    for(auto i : map){

        if(i.second.size()>1) cn++;
    }

    if(cn <2) {
        cout << -1 <<"\n";
        return;
    }

    vector<int> ans(n,0);

    int c = 0;
    for(auto i : map){

        
        if(i.second.size()>1){

            if(c == cn-1){

                ans[i.second[0]] = 2;
                for(int j=1;j<i.second.size();j++){

                    ans[i.second[j]] = 3;
                }
            }else{
                ans[i.second[0]] = 1;
                for(int j=1;j<i.second.size();j++){

                    ans[i.second[j]] = 2;
                }
            
            }

            c++;
        }
    }

    for(int i=0;i<n;i++){

        if(ans[i] == 0) cout << 3 <<" ";
        else cout << ans[i] <<" ";
    }

    cout << "\n";

}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        solve(n);

    }
}