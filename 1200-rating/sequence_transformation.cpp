#include <bits/stdc++.h>

using namespace std;

int solve(int n, unordered_map<int,vector<int>> &map){

    int mini = INT_MAX;

    for(auto i : map){

        int op = 0;

        for(int j=0;j<i.second.size();j++){

            if(i.second[j] == 0) continue;
            else if(j==0) op++;
            else if(i.second[j]-1 != i.second[j-1]) op++; 
        }

        if(i.second.back() != n-1) op++;

        mini = min(mini, op);

    }

    return mini;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        unordered_map<int, vector<int>> map;

        for(int i=0;i<n;i++){

            int val;
            cin >> val;

            map[val].push_back(i);
        }

        cout << solve(n, map) << "\n";
    }
}