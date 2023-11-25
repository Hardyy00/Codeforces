#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

    int t;
    cin >> t;
    while(t--){

        ll n;
        int k;
        cin >> n >> k;

        vector<int> v(k);

        for(int i=0;i<k;i++){
            int temp;
            cin >> temp;

            v[i] = temp;
        }

        sort(v.begin(), v.end(), greater<int>());



        ll pos = 0;
        int m = 0;
        for(auto i : v){

            if(pos >=i) break;
            m++;
            pos += (n-i);
        }

        cout << m  << "\n";

        
    }
}