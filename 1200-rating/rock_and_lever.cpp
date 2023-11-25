#include <bits/stdc++.h>
using namespace std;

int f(int num){

    for(int i=31;i>=0;i--){

        if(((num >>i) & 1) == 1) return i;
    }

    return -1;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];


        map<int,int> map;

        for(int i=0;i<n;i++){


            map[f(v[i])]++;
        }

        long long ans = 0;

        for(auto i : map){

            ans += ((i.second)* 1LL *(i.second-1)) /2;
        }

        cout << ans << "\n";
    }
}