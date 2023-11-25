#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int a , b, c;

        cin >> a >> b >> c;

        int m1 = 0, m2 = 0, m3 = 0;

        if(max(b,c)>=a){
            m1 += max(b,c) - a + 1;
        }

        if(max(a,c) >=b){
            m2 += max(a,c) - b + 1;
        }

        if(max(a,b) >=c){
            m3 += max(a,b) - c + 1;
        }

        cout << m1 << " " << m2 << " " << m3 <<"\n";
     }
}