#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n = 7;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        cout << v[0] << " " << v[1] << " ";

        if(v[0] + v[1] == v[2] ) cout << v[3] <<"\n";
        else cout << v[2] <<"\n"; 
    }
}