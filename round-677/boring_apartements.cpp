#include <bits/stdc++.h>
using namespace std ;

int main(){

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        long long sum = (s[0]-'0' -1) * 10;
        long long rem = (s.size() * (s.size() +1)) / 2;

        cout << sum + rem <<"\n";
    }
}
