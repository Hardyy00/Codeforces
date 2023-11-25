#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        v.resize(2*n);

        for(int i=0;i<2*n;i++) cin >> v[i];

        sort(v.begin(), v.end());

        long long ll = 0;

        int i=1;
        int j=v.size()-2;

        while(i < j){
            ll += abs(v[i]-v[i-1]) + abs(v[j]-v[j+1]);
            i++;
            j--;
        }

        cout << ll << "\n";

        i=0;
        j = v.size()-1;

        while(i < j){
            cout << v[i] << " " << v[j] << "\n";
            i++;
            j--;
        }
    }
}