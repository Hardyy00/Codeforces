#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        string s;
        cin >> n >> s;

        vector<vector<char>> v(n , vector<char>(n , '='));
        vector<int> in;
        for(int i=0;i<n;i++){

            if(s[i]=='1'){
                for(int j=0;j<n;j++){

                    if(i==j) v[i][i] = 'X';
                    else{
                        v[i][j] = '=';
                        v[j][i] = '=';
                    }
                }
            }else {
                in.push_back(i);
            }
        }

        if(in.size()>0 && in.size()<=2) {
            cout << "NO" << "\n";
            continue;
        }

        for(int i=0;i<in.size();i++){
            
            int index = in[i];
            v[index][index] = 'X';
            if(i==in.size()-1){

                int nextIndex = in[0];
                v[index][nextIndex] = '+';
                v[nextIndex][index] = '-';
            }else {
                
                int nextIndex = in[i+1];
                v[index][nextIndex] = '+';
                v[nextIndex][index] = '-';
            }


        }   

        cout << "YES" << "\n";
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++) cout << v[i][j];

            cout << "\n";
        }
    }
}