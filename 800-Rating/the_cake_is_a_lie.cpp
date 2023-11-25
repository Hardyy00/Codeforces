#include <bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){

        int r,c,k;
        cin >> r >> c >> k;

        long d1 = (c-1) + (r-1)*c;

        long d2 = (r-1) + (c-1)*r;

        if(d1 == k || d2==k) cout <<"YES" <<"\n";
        else cout << "NO" <<"\n";
    }
}