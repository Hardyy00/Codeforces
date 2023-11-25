#include <bits/stdc++.h>

using namespace std;

bool f(string &s, int n){


    for(int i=2;i<n;i+=2){

        if(s[i] != s[i-2]) return false;
    }

    for(int i=1;i<n;i+=2){

        if(s[i] != s[i-2]) return false;
    }

    return true;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;


    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        int cn = 1;

        for(int i=2;i<n;i++){

            if(s[i] != s[i-2]) cn++;
        }

        cout << cn << "\n";

    }
}