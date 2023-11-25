#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class Compare {
    public:
       bool operator()(pair<int,int> &a,pair<int,int> &b){
           if(a.first == b.first){
               return a.second < b.second;
           }
           return b.first > a.first;
      }
};

void solve(){

    int n;
    cin >> n;

    int q;
    cin >> q;

    priority_queue<pair<int,int>, vector<pair<int,int>> ,Compare> pq;

    map<int,int> map;

    while(q--){

        int val;
        cin >> val;

        if(!map.count(val)){
            pq.push({1,val});
            map[val] = 1;
        }else{

            while(!pq.empty() && pq.top().first < map[pq.top().second]) pq.pop();

            pq.push({map[val]+1, val});
            map[val]++;
        }

        cout << pq.top().second << endl;
    }

    
  
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int t;
    // cin >> t;

    // while(t--){
        
        solve();
    // }
}