#include <bits/stdc++.h>

using namespace std;

bool isPowOfTwo(int n){

    if(n==1) return false;

    while(n>1){

        if(n%2 !=0) return false;

        n = n/2;
    }

    return true;
}
int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int i=n-1;
        int j=0;

        while(i>=j){

            if(isPowOfTwo(i) && i!=j){
                cout << i << " " << j << " ";
                i--;
                j++;
            }else{
                cout << i << " ";

                i--;
            }
        }

        cout << "\n";

    }
}