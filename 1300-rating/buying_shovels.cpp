#include <bits/stdc++.h>

using namespace std;

// bool isPrime(int n){

//     int i = 2;

//     while(i*i <=n){

//         if(n % i == 0) return false;

//         i++;
//     }

//     return true;
// }

int solve(int n, int k){;

    if(n <= k) return 1;
    if(k==1) return n;
    if(n==1 ) return 1;

    int it = 2;

    int ans= INT_MAX;

    while(it*it <= n){

        if(n % it == 0 ){
            if(it <=k) ans = min(ans, n/it);
            int sec = n /it;
            if(sec <=k) ans = min(ans, it);
        }

        it++;
    }

    return ans == INT_MAX ? n : ans;
}

int  main(){

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;


        cout << solve(n,k) << "\n";
    }
}