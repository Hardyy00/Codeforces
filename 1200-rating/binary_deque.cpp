#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int bs(int low, int high, vector<int> &pre, int minus,int k){

    int ans = -1;
    int st = low;

    while(low<=high){

        int mid = high + (low - high)/2;

        if((pre[mid]-minus)<=k) {
            ans = mid;
            low = mid + 1;
        }else {
            high = mid -1;
        }
    }

    return pre.size() - (ans - st + 1);
}

void solve(){

    int n,k;
    cin >> n >> k;

    vector<int> v(n);

    int sum =0;

    for(int i=0;i<n;i++){
        cin >> v[i];

        if(v[i]) sum++;
    }

    if(sum == k){
        cout << 0 << endl;
        return ;
    }

    if(sum < k) {
        cout << -1 << endl;
        return ;
    }

    vector<int> pre(n,0);

    pre[0] = v[0];

    for(int i=1;i<n;i++) pre[i] = pre[i-1] + v[i];

    int ans = INT_MAX;


    for(int i=0;i<n;i++){

        if(i==0) ans = min(ans, bs(i,n-1,pre,0,k));
        else ans = min(ans, bs(i, n-1, pre, pre[i-1],k));


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