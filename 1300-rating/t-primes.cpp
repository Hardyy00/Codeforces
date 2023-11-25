#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void f(set<ll> &set){
    vector<int> primes(1e6 + 1, false);

    for(int i=2;i<primes.size();i++){

        if(!primes[i]){

            set.insert(i*1LL*i);
            for(int k=2;i*k<primes.size();k++){
                primes[i*k] = true;
            }
        }
    }
}

int  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    set<ll> set;

    f(set);

    while(t--){

        ll n;
        cin >> n;

        cout << (set.count(n) ? "YES" : "NO") << endl;

    }
}