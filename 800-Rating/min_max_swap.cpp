#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        for(int i=0;i<n;i++){

            if(b[i] > a[i]) swap(b[i], a[i]);
        }

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for(int i=0;i<n;i++) {

            max1 = max(max1, a[i]);
            max2 = max(max2, b[i]);
        }

        cout << max1 * 1ll * max2 << "\n";
    }
}