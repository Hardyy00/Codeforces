#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string solve(ll a, ll b, ll c){

    if(a== b && b== c) return "YES" ;


    int mini = min(a, min(b,c));

    int op = 0;

    if(a % mini !=0) return "NO";

    op += (a/mini)-1;

    if(op > 3) return "NO";

    if(b % mini !=0) return "NO";

    op += (b/mini) - 1;

    if(op > 3) return "NO";

    if(c % mini !=0) return "NO";

    op += (c/mini) - 1;

    if(op > 3) return "NO";

    return "YES";



}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        ll a, b, c;

        cin >> a >> b >> c;

        cout << solve(a, b, c ) << "\n";

        
        
    }


}