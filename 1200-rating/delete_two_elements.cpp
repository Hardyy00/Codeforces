#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;
    scanf("%d", &t);
   

    while(t--){
        
        int n;
        scanf("%d",&n);
        vector<int> v(n);
        map<int,int> map;

        ll sum = 0;

        for(int i=0;i<n;i++){

            int val;
            scanf("%d", &val);

            v[i] = val;

            map[val]++;
            sum += 1LL *val;

        }

        ll val = 2*sum /n;

        if((2*sum) % n !=0){
            cout << 0 << "\n";
            continue;
        } 

        ll ans= 0;

        for(int i=0;i<n;i++){

            if(map.count(val-v[i])){
                ans += map[val-v[i]];

                if(val - v[i] == v[i]) ans--;
            }

        }

        printf("%lld\n", ans/2);
        
    }
}
