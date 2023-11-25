#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k){

    if( n < k) {

        cout << "NO" << endl;
        return ;
    }

    int allOdd = n-(k-1);
    int allEven = n -(2*(k-1));

    if(allOdd > 0 && allOdd % 2!=0){

        cout <<"YES" <<"\n";
        for(int i=0;i<k-1;i++) cout << 1 <<" ";

        cout << allOdd <<"\n";
    }else if(allEven > 0 && allEven % 2 == 0){

        cout <<"YES" <<"\n";
        for(int i=0;i<k-1;i++){
            cout << 2 <<" ";

        }

        cout << allEven <<"\n";
    }else{

        cout << "NO" <<"\n";
    }

}


int main(){

    int t;
    cin >> t;

    while(t--){

        int n,k;
        cin >> n >>k;

        solve(n,k);
    }
}