#include <bits/stdc++.h>

using namespace std;

bool isSquare(int n){

   int root = sqrt(n);

   return root*root == n;
}
int main(){

    int t;
    cin >> t;

    while(t--){

        int n ;
        cin >> n;

        if(n%2==0 && isSquare(n/2) || (n%4==0 && isSquare(n/4))) cout << "YES\n";
        else cout << "NO\n"; 
    }
}