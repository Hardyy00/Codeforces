#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>> n;

        int maxi = 0;
        while(n !=0){
            int d = n % 10;
            n /=10;

            maxi = max(maxi,d);
        }

        cout << max(maxi,1) <<"\n";
    }
}