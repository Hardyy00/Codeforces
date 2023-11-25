#include <bits/stdc++.h>

using namespace std;

int solve(string &s){

    int ans =INT_MAX;

    int si = 0;
    int ei= 0;

    vector<int> v(4,0);

    while(ei < s.size()){

        v[s[ei]-'0']++;

        if(v[1]>0 && v[2] > 0 && v[3] >0){

            while(v[s[si]-'0'] >1 && si <=ei) {

                v[s[si]-'0']--;
                si++;
                
            }

            ans = min(ei-si+1, ans);
        }

        ei++;

    }

    return ans == INT_MAX ? 0 : ans;

}

int main(){

    int t;
    cin >> t;

    while(t--){

        string s;
        cin>>s;

        cout << solve(s) <<"\n";

    
    }
}