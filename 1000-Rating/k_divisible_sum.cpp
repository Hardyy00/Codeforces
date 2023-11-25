#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll n, k;
        cin >> n >> k;

        if(n >= k){

            if(n%k == 0) cout << 1 << "\n";
            else cout << 2 << "\n";

        }else{

            int x = k%n == 0? k/n : k/n+1;

            cout << x << "\n";
        }
    }
}
