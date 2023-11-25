#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >>t;

    while(t--){

        int n;
        cin >> n;

        map<int,int> map;

        bool f = false;

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;

            map[temp]++;

            if(map[temp]>1) f = true;
        }

        if(f) cout << "YES" << "\n";
        else cout << "NO" <<"\n";

        
    }
}