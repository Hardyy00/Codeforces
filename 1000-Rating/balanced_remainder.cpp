#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int arr[3]{0};


        int ans = 0;

        for(int i=0;i<n;i++){

            int temp;
            cin >> temp;

            arr[temp%3]++;
        }

        int mid = n/3;

        while(arr[0]!= mid || arr[1]!=mid || arr[2]!=mid ){

            if(arr[0]> mid) {
                int rem = arr[0]-mid;
                arr[0] = mid;
                ans += rem;
                arr[1]+= rem;
            }

            if(arr[1] > mid){
                int rem = arr[1] - mid;
                arr[1] = mid;
                ans += rem;
                arr[2] += rem;
            }

            if(arr[2] > mid){
                int rem   = arr[2] - mid;
                arr[2] = mid;
                ans += rem;
                arr[0] += rem; 
            }
        }

        cout << ans << "\n";
    }
}