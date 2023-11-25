#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll a, b;
        cin >> a >> b;

        if(b==1){
            cout << "NO"  << "\n";
            continue;
        }

        ll mul = a*b;
        ll x = 0,  y =0;

        if(mul % 2 == 0){
           
           mul  = mul *2;
           x = a;
           y =  -x;
        }else {

            int mid = b/2;
            x = a * 1L * mid;
            y = a * 1L * (mid+1);
        }

        cout << "YES" << "\n";
        cout << x << " " << y << " " << mul << "\n";


    }
}