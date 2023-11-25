#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        int a = 0;
        int b =0;
        int c = 0;

        for(auto &ch: s){

            if(ch == 'A') a++;
            else if (ch == 'B') b++;
            else c++;
        }

        if(c + a ==b) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}