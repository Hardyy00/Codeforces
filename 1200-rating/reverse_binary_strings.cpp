#include <bits/stdc++.h>

using namespace std;

int solve(string &s){

    int pairs = 0;
    int n = s.size();
    for(int i=1;i<n;i++){

        pairs += s[i]==s[i-1];
    }

    return pairs/2;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        string s1 = "0" + s + "1";
        string s2 = "1" + s + "0";

        cout << min(solve(s1), solve(s2)) << endl;

    }
}