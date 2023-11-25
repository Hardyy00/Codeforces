#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        int k;
        cin >>k;

        vector<int> v(n);
        vector<int> a(n);

        for(int i=0;i<n;i++) {
            cin >> v[i];

            a[i] = v[i];
        }

        sort(a.begin(), a.end());

        unordered_map<int,int> map;

        map[a[0]] = INFINITY;
        for(int i=1;i<n;i++){
            map[a[i]] = a[i-1];
        }


        int subs = 0;

        for(int i=1;i<n;i++){

            if(v[i-1]!=map[v[i]]) subs++; 
        }

        subs++;

        cout << (k >= subs? "Yes" : "No") << "\n";

        
    }
}