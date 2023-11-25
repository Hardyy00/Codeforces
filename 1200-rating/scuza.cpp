#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int bs(vector<ll> &v, ll l){

    int low =0;
    int high = v.size()-1;

    int ans = -1;   

    while(low <=high){

        int mid = high + (low - high)/2;

        if(v[mid] <= l) {
            ans = mid;
            low = mid +1;
        }else{
            high = mid-1;
        }

    }

    return ans;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,q;
        cin >> n >> q;

        vector<ll> pre(n);
        vector<ll> v(n);

        cin >> pre[0];
        v[0] = pre[0];

        for(int i=1;i<n;i++){
            ll val;
            cin >> val;

            pre[i] = pre[i-1] + val;
            v[i] = max(v[i-1], val);
        }

        while(q--){
            ll val;
            cin >> val;

            int ans = bs(v,val);

            cout << (ans == -1 ? 0 : pre[ans])  << " " ;
        }

        cout << endl;
    }
}