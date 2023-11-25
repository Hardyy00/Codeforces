#include <bits/stdc++.h>

using namespace std;

int main(){

    int t ;

    cin >> t;

    while(t--){

        string s;
        cin >> s;

        vector<int> fre(26,0);

        for(int i=0;i<s.size();i++){
            fre[s[i] - 'a']++;
        }

    

        string ans="";

        for(int i=0;i<26;i++){
            // cout << fre[i] << endl;
            while(fre[i]!=0){
                // cout << i << endl;
                ans+= (char) ('a'+i);
                fre[i]--;
                // cout << ans << endl;
            }
            
        }

        cout << ans << "\n";
    }
}