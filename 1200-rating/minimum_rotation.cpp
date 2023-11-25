#include <bits/stdc++.h>

using namespace std;

void solve(){


    string s;
    cin >> s;

    int n= s.size();

    vector<int> fre(10,0);

    int mini = 10;

    for(int i=n-1;i>=0;i--){

        int d = s[i]-'0';

        if(d > mini){
            fre[min(d+1,9)]++;
        }else if(d==mini) fre[d]++;
        else {
            mini = d;
            fre[mini]++;
        }
    }

    string ans =  "";

    for(char ch='0';ch <='9';ch++){

        while(fre[ch-'0']){
            ans += ch;
            fre[ch-'0']--;
        }
    } 

    cout << ans << endl;

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        solve();
    }
}