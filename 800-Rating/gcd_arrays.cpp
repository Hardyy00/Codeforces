#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int l,r, k;

        cin >> l >> r >> k;


        if(l==r){

            if(l==1) cout << "NO" << "\n";
            else cout << "YES" << "\n";

            continue;
             
        }

        int odds = (r-l)/2;

        if((l&1) ==  1 || (r & 1) == 1) odds++;

        cout << (odds <=k ? "YES" : "NO")<< "\n";

        
    }
}