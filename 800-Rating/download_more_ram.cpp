#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        long long k;
        cin >> n >> k;

        vector<pair<int,int>> vec(n);

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            vec[i].first = temp;
        }

        for(int j=0;j<n;j++){
            int temp;
            cin >> temp;
            vec[j].second = temp;
        }

        sort(vec.begin(),vec.end());

        for(int i=0;i<n;i++){
            
            if(vec[i].first <= k){
                k+=vec[i].second; 
            }else {
                break;
            }
        }

        cout << k << "\n";
        
    }
}