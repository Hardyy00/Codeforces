#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll a ,ll b){

    ll ans= 31;
    
    for(int i=0;i<=31;i++){

        if(b + i == 1) continue;

        ll cn= 0, temp = a;

        while(temp!=0){
            cn++;
            temp /= (b+i);
        }

        ans = min(ans,cn + i);
    }

    return ans;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        ll a, b;
        cin >> a >> b;

        cout << solve(a,b)<< "\n";
    }
}