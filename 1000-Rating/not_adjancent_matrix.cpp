#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        if(n==2){
            cout << -1 << "\n";
            continue;
        }

        int last = n *n;

        int c = 0;
        int itOdd = 1;

        while(itOdd <= last){

            cout << itOdd << " ";
            
            itOdd+=2;
            c++;
            c = c%n;
            if(c == 0) cout << "\n";
        }

        int itEven = 2;

        while(itEven <= last){
            cout << itEven << " ";

            itEven+=2;
            c++;
            c = c%n;
            if(c==0) cout << "\n";
        }
    }
}