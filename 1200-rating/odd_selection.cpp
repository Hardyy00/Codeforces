#include <bits/stdc++.h>

using namespace std;

bool solve(int n,int x ,int e, int o){

    if(o == 0) return false;

    for(int i=1;i<=x;i+=2){

        int po = i;
        int pe = x-i;

        if(e >=pe && o>=po) return true;
    }

    return false;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,x;
        cin >> n >> x;

        int e= 0, o= 0;
        for(int i=0;i<n;i++){

            int v;
            cin >> v;

            if((v&1) ==1) o++;
            else e++;
        }

        cout << (solve(n,x,e,o) ? "Yes" : "No") << "\n";
        

    }
}