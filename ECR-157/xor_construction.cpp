#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n-1);

    for(int i=0;i<n;i++) cin >> v[i];

    vector<int> ans(n);

    ans[0] = 0;

    for(int i=1;i<n;i++){

        ans[i] = solve(ans[i-1] ,v[i-1]);
    }
}