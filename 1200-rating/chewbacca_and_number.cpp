#include <bits/stdc++.h>

using namespace std;

void solve(){

    string s;
    cin >> s;

    int n = s.size();

    string ans =  "";

    if(s[0]!='9'){
        ans += to_string(min(s[0]-'0', 9 - (s[0]-'0')));
    }else{
        ans += s[0];
    }

    for(int i=1;i<n;i++){
        ans += to_string(min(s[i] -'0', 9 - (s[i]-'0')));
    }

    cout << ans <<"\n";
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}