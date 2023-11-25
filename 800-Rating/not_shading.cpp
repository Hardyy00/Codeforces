#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,m,r,c;
        cin >> n >>m >> r >> c;

        vector<vector<char>> mat(n,vector<char>(m));

        int b = 0;

        for(int i=0;i<n;i++){

            string s;
            cin >> s;

            for(int j=0;j<m;j++){

                if(s[j]=='B') b++;

                mat[i][j]= s[j];
            }
        }

        if(b == 0) {
            cout << -1 <<"\n";
            continue;
        }

        if(mat[r-1][c-1] == 'B'){
            cout << 0 <<"\n";
            continue;
        }

        bool f = false;

        for(int j=0;j<m;j++){

            if(mat[r-1][j]== 'B') {
                f = true;
                break;
            }
        }

        if(f) {
            cout << 1 <<"\n";
            continue;
        }

        for(int i=0;i<n;i++){

            if(mat[i][c-1]=='B'){
                f = true;
                break;
            }
        }

        if(f) {
            cout << 1 <<"\n";
            continue;
        }

        cout << 2 <<"\n";


    }
}