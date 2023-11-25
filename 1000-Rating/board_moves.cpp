#include <bits/stdc++.h>

using namespace std;

long long solve(int n){

    if(n==1) return 0;

    long long it = 1;
    long long ans = 0;

    long long st = 3;
    while(st <=n){

        ans+= ((st * 1LL *st) - ((st-2)* 1LL * (st-2))) * it;

        

        it++;
        st+=2;
    }

    return ans;
}
int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        cout << solve(n) << "\n";
    }
}