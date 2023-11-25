#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){

        int n;
        cin >> n;

        unordered_map<int,int> map;

        for(int i=0;i<n;i++){
            int val;
            cin >> val;

            map[val] = i+1;
        }

        vector<int> v(map.size());

        for(auto i : map) v.push_back(i.first);

        int maxi = -1;
        for(auto i : v){

            for(auto j : v){
                
                if(__gcd(i,j) == 1){
                    maxi = max(maxi, map[i]+ map[j]);
                }
            }
        }

        cout << maxi << "\n";
    }
}