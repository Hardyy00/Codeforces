#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int n){

    if(v.size()<=2) return 0;

    int dec= 1;
    int p = -1;

    for(int i=n-2;i>=0;i--){
        
        if(v[i] <=v[i+1] ) dec++;
        else break;
    }

    int inc = 1;

    for(int i=n-2;i>=0;i--){
        if(v[i] >=v[i+1]) inc++;
        else {
            p = i;
            break;
        }
    }

    int mer = inc;
    for( int i=p;i>=0;i--){

        if(v[i]<=v[i+1]) mer++;
        else break;
    }

    return min(n - inc, min(n-dec, min(n-mer,n)));
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        cout << solve(v,n) << "\n";
    }
}