#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &s, vector<pair<int,int>> &v){

    int n = v.size();
    int mini = INT_MAX;
    for(int i=0;i<n;i++){

        int tot = 0;

        for(int j=i-1;j>=0;j--){

            tot += (v[j+1].first - v[j].second -1);
        }

        for(int j=i+1;j<n;j++){

            tot += (v[j].first - v[j-1].second -1);
        }

        mini = min(tot, mini);
        
    }

    return mini;
}

int main(){

    int t;
    cin>> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);

        for(int i=0;i<n;i++) cin >> s[i];

        vector<pair<int,int>> v;

        if(s[0] == 1) v.push_back({0,-1});

        for(int i=1;i<n;i++){


            if(s[i]==1){
                
                if(s[i-1]!=1) v.push_back({i,-1});
                
            }else if(s[i] ==0){

                if(s[i-1]==1) v.back().second = i-1;
            }


        }

        if(s.back() ==1) v.back().second = n-1;

        

        cout << solve(s,v) << "\n";

    }
}