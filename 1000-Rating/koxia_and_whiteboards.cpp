#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, m;
        cin >> n >> m;

        vector<int> arr(n+m);

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;

            arr[i] = temp;
        }

        for(int i=0;i<m;i++){
            int temp;
            cin >> temp;

            arr[n+i] = temp;
        }

        sort(arr.begin(), arr.end()-1);

        int count = 0;

        long long sum = 0;

        for(int i=m+n-1;i>=0;i--){

            sum += (long long)arr[i];

            count++;

            if(count == n) break;

        }

        cout << sum << "\n";

    }
}