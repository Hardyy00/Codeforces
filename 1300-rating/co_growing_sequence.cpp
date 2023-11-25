#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &v, int n){

    vector<int> ans(n);

    int it = 0;
    ans[it++] = 0;

    while(it< n){

        int back = v[it-1] ^ ans[it-1];

        for(int x=0;x<=max(back,v[it]);x++){

            if((back & (v[it] ^ x)) == back) {
                ans[it++] = x;
                break;
            }
        }


    }

    for(auto i : ans) cout << i << " ";

    cout << "\n";
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin>> v[i];

        solve(v,n);
    }
}