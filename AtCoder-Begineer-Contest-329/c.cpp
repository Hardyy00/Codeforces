#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char,int> map;

    int cn =1;
    ll ans = 1;

    map[s[0]] = 1;

    for(int i=1;i<n;i++){

        if(s[i]==s[i-1]){

            cn++;

            if(map[s[i]] < cn){
                ans++;
                map[s[i]] = cn;
            }
            
        }else {

            cn =1;
            if(!map.count(s[i])){
                map[s[i]] = cn;
                ans++;
            }
        }
    }

    cout << ans <<"\n";
    
   
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;

    // while(t--){
        
        solve();
    // }
}