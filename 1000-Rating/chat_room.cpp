#include <bits/stdc++.h>

using namespace std;
int main(){

    string s;

    cin >> s;
    string mess = "hello";

    if( s.size() < 5) cout << "NO" << "\n";
    else {

        int i=0;

        for(int j=0;j<s.length();j++){

            if(s[j] == mess[i]){
                i++;
            }

            if(i==5) break;
        }

        if(i==5) cout << "YES" <<"\n";
        else cout <<"NO" << "\n";
    }
}