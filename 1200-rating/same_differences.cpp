#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

    int t;
    cin >> t;

    while(t--){

        int n ;
        cin >> n;

        unordered_map<int,int> map;

        for(int i=0;i<n;i++){

            int v;
            cin >> v;

            map[v-i]++;
        }

        ll ans = 0;

        for(auto it : map){

            if(it.second > 1){


                ans += ((it.second) *1LL* (it.second-1))/2;

            }
        }

        cout << ans << "\n";
        
    }
}