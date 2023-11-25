#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void  solve(){

    int n;
    cin>> n;
    
    vector<int> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    vector<int> b(n);
    
    for(int i=0;i<n;i++) cin >>b[i];

    for(int i=0;i<n;i++){

        if(v[i] > b[i]) {
            cout << "NO" << endl;
            return ;
        }

        if(v[i]==b[i]) continue;

        if(b[i] > b[(i+1)%n]+1){
            cout << "NO" << endl;
            return ;
        }
    }

    cout << "YES" << endl;
     
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