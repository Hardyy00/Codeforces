#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >>n;

    vector<ll> v(n);

    cin >> v[0];
    int mini = 0;

    for(int i=1;i<n;i++){
        
        cin >> v[i];
        if(v[i] < v[mini]){
            mini = i;
        }
    }


    for(int i=mini+1;i<n;i++){
        
        if(v[i] < v[i-1]) {
            cout << -1 << "\n";
            return ;
        }
    }

    cout << mini << "\n";

    
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        
        solve();
    }
}