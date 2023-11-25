#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int ones =0, twos =0 ;

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;

            if(temp==1) ones++;
            else twos++;
        }

        if(ones==0 && twos!=0 && twos%2==0) cout << "YES" << "\n";
        else if ( twos==0 && ones!=0 && ones%2==0) cout << "YES" << "\n";
        else if(ones!=0 && twos!=0 && (ones + twos*2)%2 ==0) cout << "YES" << "\n";
        else cout << "NO" << "\n"; 
    }
}