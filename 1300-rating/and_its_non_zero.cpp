#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v(2e5+2,vector<int>(32,0));

void findBits(){

    for(int i=1;i<=2e5;i++){

        for(int b=31;b>=0;b--){

            v[i][b] += v[i-1][b] + ((i >> b) & 1);
        }
    }
}

int main(){

    int t;
    cin >> t;

    findBits();

    while(t--){

        int l,r;
        cin >> l >> r;

        int mini = INT_MAX;
        for(int i=31;i>=0;i--){

            int bits = v[r][i] - v[l-1][i];

            mini = min(mini,r-l+1 - bits);

        }

        cout << mini <<"\n";
    }
}