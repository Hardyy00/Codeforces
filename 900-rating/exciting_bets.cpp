#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(ll a, ll b){

    if(a==b){
        cout<< 0 << " " << 0 << "\n";
        return;
    }

    if(a == 0 || b == 0){
        cout << abs(a-b) << " " << 0 << "\n";
        return;
    }

    ll maxi = max(a,b);
    ll mini = min(a,b);

    ll diff = abs(maxi-mini);

    ll neg = abs(((mini / diff) * diff) - mini);

    ll p = maxi % diff == 0 ? maxi / diff : (maxi / diff) + 1;

    ll pos = abs((diff * p) - maxi);

    ll mm = min(neg, pos);

    cout << diff << " " << mm <<"\n";


}
int main(){

    int t;
    cin >> t;

    while(t--){

        ll a,b;
        cin >> a >> b;

        solve(a,b);

    }
}