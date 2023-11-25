#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dp(3, vector<int>(4001,-1));
vector<int> v(3);

int solve(int index, int target){

    if(index == 0){

        if(target % v[index] == 0) return target / v[index];

        return -1e6;
    }

    if(dp[index][target]!=-1) return dp[index][target];

    int take = -1e6;

    if(v[index] <= target) take = 1 + solve(index, target-v[index]);

    int notTake = solve(index-1, target);

    return dp[index][target] = max(take , notTake); 
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    

    int n;
    cin >> n;

    cin >> v[0] >> v[1] >> v[2] ;

    cout << solve(2,n) << endl;
         

    


}