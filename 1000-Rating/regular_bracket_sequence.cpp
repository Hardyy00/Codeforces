#include <bits/stdc++.h>

using namespace std;

string isValid(string &s){

    int n=  s.size();
    if(s[0] == ')' || s[n-1] == '(') return "NO";
    
    int q = 0;
    
    for(int i=0;i<n;i++){

        if(s[i] != '(' && s[i]  != ')') q++; 
    }

    return q%2==0 ? "YES" : "NO";
}

int main(){
    int t ;
    cin >> t;

    while(t--){
        
        string s;
        cin >> s;

        cout << isValid(s) << "\n";
    }
}