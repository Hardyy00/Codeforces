#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> v(n+1);

    for(int i=0;i<n;i++) {
        int val;
        cin >> val;

        v[val] = i+1;
    }

    for(int i=n;i>=1;i--){
        cout << v[i] << " ";
    }

    cout << endl;




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