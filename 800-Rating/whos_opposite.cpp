#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){
        int a , b ,c;

        cin >> a>> b >>c;
        
        if(a==b){
            cout << -1 << "\n";
            continue;
        }
        int n = (abs(a-b)-1)*2 + 2;
        if(a > n || b > n || c > n){
            cout << - 1 << "\n";
        }else{

            if(c + (n/2) >n) cout << c - (n/2) << "\n";

            else cout << c + (n/2) << "\n";
        }
        
    }
}