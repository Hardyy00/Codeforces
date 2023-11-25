#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        int val = n ;
        for(int i=0;i<n;i+=2) arr[i] = val--;

        val = 1;

        for(int i=1;i<n;i+=2) arr[i] = val++;

        for(int it : arr) cout << it << " ";

        cout << "\n";

    }
}