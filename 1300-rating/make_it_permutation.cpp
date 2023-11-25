#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n, rem,add;
    cin >> n >> rem >> add;

    ll initialCost = 0;

    map<ll,ll> map;

    for(int i=0;i<n;i++){
        ll val;
        cin >> val;

        map[val]++;
    }

    vector<ll> v(map.size());

    int it = 0;
    for(auto i : map){

        v[it++] = i.first;
        initialCost += (i.second-1) *1LL* rem; 
    }

    sort(v.begin(),v.end());

    initialCost += v[0] == 1 ? 0 : add;
    
    int dec = v[0] == 1 ? 1 : 0;

    ll mini = LLONG_MAX;

    for(int i=0;i<v.size();i++){

        ll tot = max(v[i]-2, 0LL);
        ll toAdd = tot - max(i*1LL-dec,0LL);
        ll toRem = v.size()-1-i;
        ll opCost = initialCost + toAdd*1LL*add + rem * 1LL * toRem;
        mini = min(mini,opCost);
    }

    ll deleteAll = n * 1LL * rem;
    if(v[0] == 1) deleteAll -= rem;
    else deleteAll += add;

    cout << min(mini, deleteAll) << endl;


}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        solve();
    }
}