#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll n, k;
        cin >> n >> k;

        if(n % 2 !=0){
            cout << 1 << " " << n/2 << " " << n/2 << "\n";

        }else{

            if((n/2) % 2 ==0){
                cout << n/4 << " " << n/4 << " " << n/2 << 
                "\n";
            }else{

                cout << 2 << " " << n/2 - 1 << " " << n/2 - 1 << "\n"; 
            }
        }
    }
}