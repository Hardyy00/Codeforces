#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,k;
        cin >> n >>k;

        
        if(n % 2 ==0){

            cout << (k % n == 0 ? n : k % n)  <<"\n";
        }else{

            k--;
            int mid = n/2  ;
            int ans= (k + k/mid) % n  +1;

            cout << (ans == 0 ? n : ans ) <<"\n";
        }
    }
}