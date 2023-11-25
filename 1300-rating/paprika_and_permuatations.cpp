#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &v, int n){

    vector<bool> check(n+1,false);

    vector<int> notHelped;

    for(int i=0;i<n;i++){
        
        if(v[i] <=n && !check[v[i]]){
            check[v[i]] = true;
        }else{
            notHelped.push_back(v[i]);
        }
    }

    sort(notHelped.begin(),notHelped.end());

    vector<int> convertTo;

    for(int i=1;i<=n;i++) if(!check[i]) convertTo.push_back(i);

    int ans= notHelped.size();

    for(int i=0;i<notHelped.size();i++){

        if((notHelped[i] & 1) == 1 && (notHelped[i]/2 < convertTo[i]) ) return -1;
        else if((notHelped[i] & 1) == 0 && ((notHelped[i]/2) -1  < convertTo[i])) return -1;
    }

    return ans;
    
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        cout << solve(v, n) << "\n";
        
    }
}