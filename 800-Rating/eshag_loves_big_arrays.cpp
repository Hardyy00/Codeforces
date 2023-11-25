#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        int mini = INT_MAX;

        vector<int> fre(101,0);

        for(int i=0;i<n;i++){

            int temp;
            cin >> temp;

            fre[temp]++;

            mini = min(mini, temp);

        }

        cout << n- fre[mini] << "\n";
    }
}