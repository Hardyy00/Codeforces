#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<vector<int>> &v){

    vector<bool> d1(n, false);
    vector<bool> d2(n, false);


    for(int i=0;i<5;i++){

        int n1 = 0;
        for(int j=0;j<n;j++){

            d1[j] = false;
            d1[j] = v[j][i];

            if(d1[j]) n1++;
        }

        for(int j=i+1;j<5;j++){

            int n2 = 0;
            for(int k=0;k<n;k++){
                d2[k] = v[k][j];
                
                n2 += d2[k];
            }

            bool f = true;
            for(int k=0;k<n;k++){
                
                if((d1[k] || d2[k]) == false) {
                    f = false;
                    break;
                }

                d2[k] = false;
            }   


            if(f && (n1 >= (n/2)) && (n2 >= (n/2))) return "YES";
            


        }
    }

    return "NO";
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<vector<int>> v(n, vector<int>(5));

        for(int i=0;i<n;i++) {
            for(int j=0;j<5;j++) cin >> v[i][j];
        }

        cout << solve(n, v) << "\n";
    }
}