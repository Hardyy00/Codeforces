#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,x;
        cin >> n >> x;

        vector<int> v(n);
        vector<int> temp(n);

        for(int i=0;i<n;i++) {
            cin >> v[i];
            temp[i] = v[i];

        }
        if(x <= n/2) cout << "YES" << "\n";
        else {
            int l = n-x;
            int r = x -1;

            bool f=true;

            sort(temp.begin(),temp.end());

            for(int i=l;i<=r;i++){

                if(v[i] != temp[i]){
                    f = false;
                    break;
                }

            }

            cout << (f ? "YES" : "NO") << "\n";
        }

        
    }
}