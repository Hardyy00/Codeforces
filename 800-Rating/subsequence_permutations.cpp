#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        
        cin >> s;
        string copy = s; 

        sort(copy.begin(), copy.end());

        int count = 0;

        for(int i=0;i<n;i++){

            if( s[i] != copy[i]) count++;
        }

        cout << count << "\n";
    }
}