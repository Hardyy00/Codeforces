#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){

        string s ;
        cin >> s;

        int fre[26]{0};

        for(int i=0;i<s.size();i++){

            fre[s[i] -'a']++;
        }

        int sum = 0;

        for(int i=0;i<26;i++){

            sum += fre[i] >=2 ? 2 : fre[i];
        }

        cout << sum /2 << "\n";
    }
}