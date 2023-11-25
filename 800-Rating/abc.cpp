#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        int z= 0;
        int o = 0;

        for(int i=0;i<n;i++){

            if(s[i]=='0') z++;
            else o++;
        }

        if(o>1 || z >1) cout << "NO" << "\n";
        else cout << "YES"  <<"\n";
    }
}