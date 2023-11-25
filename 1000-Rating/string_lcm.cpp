#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        string s1, s2;
        cin >> s1 >> s2;

        if(s1+s2 != s2 + s1) {
            cout << -1 << "\n";
            continue;
        }

        if(s2.size() > s1.size()){
            swap(s1,s2);
        }

        int gcd= __gcd(s1.size(), s2.size());

        string prefix = s1.substr(0, gcd);

        int lcm = (s1.size() * s2.size())/gcd;

        int rep = lcm/prefix.size();

        for(int i=0;i<rep;i++) cout << prefix;

        cout << "\n"; 
    }
}