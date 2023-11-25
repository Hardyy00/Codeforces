#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;

        vector<int> odd;

        int ev = 0;

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;

            if(temp%2) odd.push_back(temp);
            else ev++;
        }

        long long cn = 0;

        while(ev>0){
            cn += 1LL *(ev-1) + odd.size();
            ev--;
        }

        int ol = odd.size();
        sort(odd.begin(), odd.end());
        for(int i=0;i<ol;i++){

            if(odd[i] == 1) continue;
            for(int j=i+1;j<ol;j++){

                if(__gcd(odd[i], odd[j]) > 1) cn++;

            }
        }

        cout << cn << "\n";

    
    }
}