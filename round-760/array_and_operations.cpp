#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >>t;

    while(t--){

        int n,k;
        cin >> n >>k;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        if(n==1){
            cout << v[0] <<"\n";
            continue;
        }

        sort(v.begin(), v.end(), greater<int>());

        int i=0;
        int j=k;

        long long sum = 0;

        while(i<k){
            sum+=  v[j]/v[i];
            i++;
            j++;
        }

        while(j < n) sum += 1LL * v[j++];

        cout << sum <<"\n"; 
    }
}