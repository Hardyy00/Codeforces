#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;

    cin >> t;

    while(t--){

        ll n;
        cin >> n;

        if( n == 1) {
            cout << 0 << "\n";
            continue;
        }

        ll pw = 1;

        while(pw <= n){
            pw *= 2;
        }

        if(pw > n) pw /=2;

        cout << pw - 1 << "\n";
    }
}