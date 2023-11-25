#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        bool f = true;

        int first ;
        cin >> first;

        int mini = first;

        for(int i=1;i<n;i++){
            int temp;
            cin >> temp;

            mini = min(mini, temp);
        }

        cout << (first==mini ? "BOB" : "ALICE") << endl;
    }
}