#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll x,y,a,b;
        cin >> x >> y;
        cin >> a >> b;

        ll p1 = (x+y) * a;

        

        ll p2 = min(x,y) * b + ((max(x,y)-min(x,y)) * a);


        cout << min(p1, p2) <<"\n"; 
    }
}