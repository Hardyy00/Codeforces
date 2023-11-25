#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<bool> &visit, vector<int> v[]){

    visit[node] = true;

    for(auto next : v[node]){

        if(!visit[next]) dfs(next, visit, v);
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> v[n+1];

    for(int i=1;i<=n;i++) {

        int val;
        cin >> val;

        v[i].push_back(val);
        v[val].push_back(i);
    }
    vector<bool> visit(n+1, false);

    int cn = 0;

    for(int i=1;i<=n;i++){

        if(!visit[i]) {
            dfs(i, visit, v);
            cn++;
        }
    }  

    cout << cn << endl;

    
}