#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> v;
int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        n+=2;

        v.resize(n);

        for(int i=0;i<n;i++) cin >> v[i];

        sort(v.begin(), v.end());

        ll sum = 0;

        for(int i=0;i<n-1;i++) sum += v[i];

        int c = -1;
        for(int i=0;i<n-1;i++){

            if((sum-v[i]) == v[n-1]){
                c = i;
                break;
            }
        }
        
        if(c!=-1){

            for(int i=0;i<n-1;i++){

                if(i!=c) cout << v[i] << " ";

            }

            cout << "\n";
            continue;
        }

        if(sum-v[n-2] == v[n-2]){
            
            for(int i=0;i<n-2;i++) cout << v[i] << " ";

            cout << "\n";

            continue;
        }

        cout << -1  << "\n";
    
    }
}