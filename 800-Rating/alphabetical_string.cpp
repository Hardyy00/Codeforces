#include <bits/stdc++.h>

using namespace std;

int main(){

    int t ;

    cin >> t;

    while(t--){

        string s;
        cin >> s;
        
        int n = s.size();

        int fre[26]{0};

        for(int i=0;i<n;i++) fre[i] = 1;
        int tot  =n;
        bool al = false;
        int in = -1;

        for(int i=0 ;i<n;i++){

            if(fre[s[i] -'a'] == 0) {
                cout << "NO" << "\n";
                al = true;
                break;
            }

            fre[s[i]-'a']--;

            if( s[i] == 'a') in = i;

        }

        if(al ) continue;

        al = false;

        for(int i=in-1;i>=0;i--){

            if(s[i] <= s[i+1]){
                cout << "NO" << "\n";
                al = true;
                break;
            }
        }

        if(al) continue;

        al = false;

        for(int i=in+1;i<n;i++){

            if(s[i] <= s[i-1]){
                cout << "NO" << "\n";
                al = true;
                break;
            }
        }

        if(al ) continue;

        cout << "YES" << "\n";
    }
}