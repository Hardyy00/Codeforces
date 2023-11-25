#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    if(n==1){
        cout << v[0] << endl;
        return ;
    }

    vector<int> ans;

    ans.push_back(v[0]);

    for(int i=1;i<n;i++){

        int a1 = -v[i] + ans.back();
        int a2 = v[i] +ans.back();

        if((a1 > -1 && a2 >-1 && a1 != a2) || (a1 < 0 && a2 < 0)){
            cout << -1 << endl;
            return ;
        }

        if(a1 > -1) ans.push_back(a1);
        else ans.push_back(a2);
    }

    for(auto i : ans) cout << i << " ";

    cout << endl;


    
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