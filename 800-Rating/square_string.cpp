#include <bits/stdc++.h>

using namespace std;

string solve(string &s){

    if((s.size() & 1) == 1) return "NO";

    int mid = s.size() /2;
    int i=0;
    while(mid < s.size()){

        if(s[i] != s[mid]) return "NO";

        i++;
        mid++;
    }

    return "YES";
}

int main(){

    int t;
    cin >> t;
    
    while(t--){

        string s;
        cin>> s;

        cout << solve(s) << "\n";
    }
}