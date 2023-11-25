#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin  >> t;

    while(t--){

        int n,m;
        cin >> n >> m;

        vector<int> v;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                int d1 = abs(0-i) + abs(0-j);
                int d2 = abs(0-i) + abs(m-1-j);
                int d3 = abs(n-1-i) + abs(0-j);
                int d4 = abs(n-1-i) + abs(m-1-j);

                v.push_back(max(d1,max(d2,max(d3,d4))));
            }
            
        }

        sort(v.begin(),v.end());

        int last = n*m;

        for(int i=0;i<last;i++) cout << v[i] << " " ;

        cout << "\n";
    }
}