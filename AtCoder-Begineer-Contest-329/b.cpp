#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(),v.end());

    for(int i=n-2;i>=0;i--){

        if(v[i] != v[i+1]){

            cout << v[i] << endl;
            break;
        }
    }

    
  
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;

    // while(t--){
        
        solve();
    // }
}