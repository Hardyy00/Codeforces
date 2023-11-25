#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void  solve(){

    int n;
    cin>> n;
    map<int,int> map;

    for(int i=0;i<n;i++){
        int val;
        cin >> val;

        if(val > n) continue;

        map[val]++;
    }

    ll maxi = LLONG_MIN;
    
    for(int i=1;i<=n;i++){


        ll ans = 0;
    
        for(int j=1;j*j<=i;j++){

            if(i % j == 0){
                
                ans += 1LL*map[j];

                int f2 = i/j;

                if(f2 != j){
                    ans += 1LL* map[f2];
                }
            }
        }

        maxi = max(maxi,ans);
    }
    
    if(maxi == LLONG_MIN) maxi = 0;

    cout << maxi << endl;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>> t;

    while(t--){

        solve();
    }
}