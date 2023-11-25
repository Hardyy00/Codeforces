#include <bits/stdc++.h>

using namespace std;

int solve(int x){

    for(int i=1;;i++){

        long long lastPos = (i*1LL * (i+1))/2;

        if(x == lastPos) return i;

        if(x == lastPos -1 ) return i+1;

        if(x < lastPos) return i;

        
    }

    return -1;
}
int main(){

    int t;
    cin >> t;

    while(t--){

        int x;
        cin >> x;

        cout << solve(x) << "\n";
    }
}