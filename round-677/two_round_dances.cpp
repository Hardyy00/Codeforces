#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


ll fact(int n){

    ll f = 1;

    for(int i=2;i<=n;i++){

        f *= 1LL* i;
    }

    return f;
}


int main(){

    int n;
    cin >> n;

    ll fn = fact(n);
    ll fb2= fact(n/2);

    ll comb = fn/(fb2 * fb2);

    ll permut = fact((n/2) -1);

    cout << (comb * permut * permut) /2  <<"\n";

    
}