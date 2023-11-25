#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t ;
    
    cin >> t;

    while(t--){

        int n;
        cin >>n;

        vector<int> arr(n);

        ll sum = 0;
        
        for(int i=0;i<n;i++){
            
            int temp;
            cin >> temp;
            sum += temp;

            arr[i] = temp;
        }

        if(sum % n !=0 ){
            cout << -1 << "\n";
        }else {

            int avg = sum / n;

            int k = 0;

            for(auto i : arr) if ( i > avg) k++;

            cout << k << "\n";


        }
    }
}