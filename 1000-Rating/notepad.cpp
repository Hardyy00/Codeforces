#include <bits/stdc++.h>

using namespace std;

int main(){

    int t ;
    cin >> t;

    while(t--){

        int n ;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<string,int> map;
        bool found = false;

        for(int i=1;i<n;i++){

            string temp ="";
            temp += s[i-1];
            temp+=s[i];
            if(map.find(temp) != map.end()){
                if(map[temp] != i-1){
                    found = true;
                    break;
                }
            }else {
                map[temp] = i;
            }
        }

        if(found) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }
}