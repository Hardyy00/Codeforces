#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    if((n & 1) == 0) {
        cout << "NO" << endl;
        return ;
    }


    cout << "yes" << endl;

    int i=1;
    int j = 2*n;
    while(i <=n){
        cout << i << " " << j << "\n";
        i+=2;
        j--;
    }

    i=2;
    while(i<=n){
        cout << i << " " << j <<"\n";
        i+=2;
        j--;
    }




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