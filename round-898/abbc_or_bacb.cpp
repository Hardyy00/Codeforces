#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin  >> t;
    while(t--){

        string s;
        cin >> s;


        bool adj = false;

        int count = 0;

        for(int i=0;i<s.size()-1;i++){

            if(s[i] == 'A') count++;   
            else if(s[i]=='B' && s[i+1]=='B') adj = true; 
        }

        if(s.back() == 'A') count++;

        if(s[0]=='B' || s.back()=='B') cout << count << "\n";

        else if(adj) cout << count << "\n";
        else {

            int mini = INT_MAX;

            int it = 0;

            for(int i=0;i<s.size();i++){

                if(s[i]=='A') it++;
                else {
                    mini = min(mini, it);
                    it = 0;
                }
            }

            mini = min(mini ,it);

            cout << count - mini <<"\n";
        }
    }
}