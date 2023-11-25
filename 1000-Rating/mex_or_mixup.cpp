#include <bits/stdc++.h>

using namespace std;

int findXOR(int a){

    int rem = a%4;
    if(rem==0) return a;
    else if(rem==1) return 1;
    else if(rem ==2) return a+1;
    else return 0;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int a, b;
        cin >> a >> b;

        int zr = findXOR(a-1);

        // cout  << "XOR : " << zr << "  " << (zr^b) << "\n";

        if(zr == b) cout << a << "\n";
        else if((zr ^ b) != a) cout << a + 1 <<"\n";
        else cout << a + 2 << "\n";
    }
}