#include <bits/stdc++.h>

using namespace std;

string solve(string &s){

    string ans= "";
    for(char i='a' ; i <='z';i++){

        ans.push_back(i);
        for(int j='a';j<='z';j++){
        
            ans.push_back(j);
           if(s.find(ans) == string::npos){
            return ans;
           }

           ans.pop_back();
        }

        ans.pop_back();
    }

    for(int i='a';i<='z';i++){

        ans.push_back(i);

        for(int j='a';j<='z';j++){

            ans.push_back(j);

            for(int k='a';k<='z';k++){

                ans.push_back(k);

                if(s.find(ans) == string::npos) return ans;

                ans.pop_back();
            }

            ans.pop_back();
        }

        ans.pop_back();

    }

    return "";
   
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n ;
        cin >> n;

        string s;
        cin >> s;

        vector<int> v(26);

        for(int i=0;i<n;i++){

            v[s[i]-'a']++;
        }

        bool f = false;
        for(char i ='a';i<='z';i++) {

            if( v[i-'a'] == 0){
                cout << i << "\n";
                f = true;
                break;
            }
        }

        if(f) continue;

        cout << solve(s) << "\n";
    }
}