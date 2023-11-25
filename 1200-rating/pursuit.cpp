#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> y;
vector<int> a;

long long solve(){

    int n= a.size();

    int low = 1;
    int high = n;
    int ans = 0;

    while (low <=high){

        int mid = high  + (low - high)/2;

        int p = (n+mid) - (n+mid)/4;

        int pfa = p - mid;

        long long ys = mid *1LL * 100 + y[n-pfa]; 

        long long as = a[max(n-p,0)];

        if(ys >= as){
            ans = mid;
            high = mid-1;
        }else{
            low = mid +1;
        }

    }
    
    return ans;


}


int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        y.resize(n);
        a.resize(n);

        
        for(int i=0;i<n;i++) cin>> y[i];
        for(int i=0;i<n;i++) cin >> a[i];

        sort(y.begin(), y.end());
        sort(a.begin(), a.end());

        int p = n  - (n/4);

        for(int i=n-2;i>=0;i--){
            y[i] += y[i+1];
            a[i] += a[i+1];
        }

        if(y[n-p]  >= a[n-p]) cout << 0 << "\n";

        else cout << solve() << "\n";






    }
}