#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){

        string order;
        string s;
        cin >> order;
        cin>> s;

        vector<int> arr(26,0);

        for(int i=0;i<order.size();i++){
            
            arr[order[i]-'a'] = i;
        }

        int pre = arr[s[0]-'a'];
        int ans = 0;

        for(int i=1;i<s.size();i++){

            int curr = arr[s[i] - 'a'];
            ans += abs(curr - pre);
            pre = curr;

        }

        cout << ans << "\n";
    }
}