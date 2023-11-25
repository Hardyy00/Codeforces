#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<pair<int,int>> v(n);

        for(int i=0;i<n;i++){

            int temp;
            cin >> temp;
            v[i] = {temp, i+1};
        }

        sort(v.begin(), v.end(), greater<pair<int,int>>());

        vector<int> ans(n+1);

        int mid = (n+1)/2;
        ans[0] = mid;
        bool left = true;
        int l = mid-1;
        int r = mid+1;
        long long tot = 0;

        for(int i=0;i<v.size();i++){

            int in = v[i].second;
            int fre = v[i].first;

            if(left){
                ans[in] = l--;
                left = false;
            }else{
                ans[in] = r++;
                left=true;
               
             }

             tot += 2 * 1LL* abs(mid-ans[in]) * 1LL *fre;
        }

        cout << tot << "\n";

        for(auto it : ans) cout << it << " " ;

        cout << "\n";



    }
}