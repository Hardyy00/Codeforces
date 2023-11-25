#include <bits/stdc++.h>
using namespace std;

string solve(string &s, int n){

    int f1 = -1;  // first occurrence of 1
    int lo= -1;   // last occurrence of 0

    for(int i=0;i<n;i++){

        if(s[i]=='1' && f1 ==-1){
            f1= i;
        }else if(s[i]=='0') lo = i;
    }

    if(lo < f1 || lo==-1 || f1 == -1) return s;

    string ans = "";

    for(int i=0;i<f1;i++) ans+=s[i];
    for(int i=lo;i<n;i++) ans += s[i];

    return ans;


}

int main(){
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        
        string s;
        cin >> s;

        cout << solve(s,n) << endl;
    }
}