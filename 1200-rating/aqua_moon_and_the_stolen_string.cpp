#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,m;
        cin>> n >> m;

        vector<vector<char>> mat(n, vector<char>(m));

        for(int i=0;i<n;i++){

            string s;
            cin >> s;

            for(int j=0;j<m;j++) mat[i][j] = s[j];
        }

        vector<vector<int>> lookup(m,vector<int>(26,0));

        for(int i=0;i<n-1;i++){

            string s;
            cin >> s;

            for(int j=0;j<m;j++) lookup[j][s[j]-'a']++;
        }

        string s = "";

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                if(lookup[i][mat[j][i] -'a'] == 0) {
                    s+= mat[j][i];
                    break;
                }else{
                    lookup[i][mat[j][i] -'a']--;
                }
            }
        }

        cout << s << "\n";
    }
}