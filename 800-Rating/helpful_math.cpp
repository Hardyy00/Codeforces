#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie();

    string s;
    cin >> s;

    int one = 0;
    int two = 0;
    int three = 0;

    for(int i=0;i<s.size();i+=2){
        
        if(s[i]=='1') one++;
        else if(s[i] =='2') two++;
        else three++;
    }

    string ans = "";

    while(one--){
        ans += "1+";
    }

    while(two--){
        ans += "2+";
    }

    while(three--){
        ans += "3+";
    }

    ans.pop_back();

    cout << ans << endl;


}