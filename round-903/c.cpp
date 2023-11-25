#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){


    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n ;
        cin >> n;

        vector<vector<char>> v(n, vector<char>(n));

        for(int i=0;i<n;i++){

            string s;
            cin >> s;
            for(int j=0;j<n;j++) v[i][j] = s[j];
        }

        ll ans = 0;

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                ans += abs(v[n-j-1][i] - v[i][j]);
                char ch = max(v[n-j-1][i], v[i][j]);
                v[n-j-1][i] = ch;
                v[i][j] = ch;

            }
        }

        cout << ans << "\n";

        
    }


}