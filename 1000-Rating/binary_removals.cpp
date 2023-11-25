#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;
        int n = s.size();

        int oneOneFirstOccur = -1;
        int zeroZeroLast = -1;

        for(int i=1;i<n;i++){

            if(oneOneFirstOccur ==-1 && s[i-1]=='1' && s[i] == '1'){
                oneOneFirstOccur =  i-1;
            }else if(s[i-1]=='0' && s[i]=='0'){
                zeroZeroLast = i-1;
            }
        }

        if(oneOneFirstOccur>-1 && zeroZeroLast>-1 && oneOneFirstOccur < zeroZeroLast) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}