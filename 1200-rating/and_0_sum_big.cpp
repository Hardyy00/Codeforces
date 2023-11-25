#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

typedef long long ll;

ll p(ll n, ll k){

    if(k==0) return 1L;
    if(k==1) return n;

    ll ans = p(n, k/2);

    if(k % 2 !=0) return ((ans * n) % mod * ans) % mod;

    return (ans * ans) % mod;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        ll n , k;

        cin >> n >> k;

        cout <<  p(n, k) % mod << "\n";
    }
}