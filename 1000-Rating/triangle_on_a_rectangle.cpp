#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll w, h;

        cin >> w >> h;

        ll maxi  = 0;

        

        for(int k=1;k<=2;k++){
            ll min1 = INT_MAX, max1 = INT8_MIN;

            int v;
            cin >> v;

            for(int i=0;i<v;i++){
                ll temp;
                cin >> temp;

                min1 = min(min1, temp);
                max1 = max(max1, temp);
            }

            maxi = max(maxi, (max1-min1) * h);
        }

        for(int k=1;k<=2;k++){
            ll min1 = INT_MAX, max1 = INT8_MIN;

            int v;
            cin >> v;

            for(int i=0;i<v;i++){
                ll temp;
                cin >> temp;

                min1 = min(min1, temp);
                max1 = max(max1, temp);
            }

            maxi = max(maxi, (max1-min1) * w);
        }

        cout << maxi << "\n";

        
        
    }
}