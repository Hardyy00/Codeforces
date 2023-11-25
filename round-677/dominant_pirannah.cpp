#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &v, int maxi, int n){
    
    bool f= true;

    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            f = false;
            break;
        }
    }

    if(f) return -1;

    for(int i=0;i<n;i++){

        if(v[i]==maxi){

            if(i-1 >-1){
                if(v[i-1] != maxi) return i + 1;
            }

            if(i+1 <n) if(v[i+1] != maxi) return i + 1;
        }
    }

    return -1;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        int maxi= 0;

        for(int i=0;i<n;i++) maxi = max(maxi,v[i]);

        cout<< solve(v,maxi,n)  <<"\n";
    }
}