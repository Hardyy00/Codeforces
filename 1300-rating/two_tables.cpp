#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



int main(){
    int t;
    cin >> t;

    while(t--){

        ll W,H;
        cin >> W >> H;
        ll x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2 ;

        ll  w,h;
        cin >> w >>h;

        ll ans = LONG_MAX;

        if((x2-x1)+w <=W){
            ans = min(ans, max(1LL*0,w-x1));
            ans = min(ans,max(1LL*0,(x2-(W-w))));
        }

        if((y2-y1) + h <=H){
            ans = min(ans,max(1LL*0,h-y1));
            ans = min(ans, max(1LL*0,y2-(H-h)));
        }

        if(ans == LONG_MAX) cout << -1 << endl;
        else cout << ans  << endl;
    }
}