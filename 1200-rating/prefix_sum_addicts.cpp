#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<ll> v(k);

    for(int i=0;i<k;i++){
        cin >> v[i];
    }

    if(n==1 || k==1){
        cout  << "YES" <<"\n";
        return;
    }

    vector<ll> nums(k-1);

    for(int i=0;i<k-1;i++){
        nums[i] = v[i+1] - v[i];
    }

    for(int i=1;i<nums.size();i++){
        if(nums[i] < nums[i-1]) {
            cout <<  "NO" <<"\n";
            return;
        }
    }

    ll last = v[0];
    ll af = nums[0];

    if(last <= ((n-k+1)*1LL * af)){
        cout << "YES" << "\n";
    }else {
        cout << "NO" <<"\n";
    }
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