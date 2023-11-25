#include <bits/stdc++.h>

using namespace std;
int main (){

    int t;
    cin >> t;

    // cout << t;

    while(t--){

        int n, k;

        cin >> n;
        cin >> k;

        int i=1;
        int rem= k;

        vector<vector<char>> mat(n, vector<char>(n, '.'));

        while(i<=n && rem>0){
            mat[i-1][i-1] = 'R';
            i+=2;
            rem--;
        }




        if(rem==0) {
            
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << mat[i][j];
                }

                cout << "\n";
            }
        }else {

            cout << -1 << "\n";
        }
    }
}