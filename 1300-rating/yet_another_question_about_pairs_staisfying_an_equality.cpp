#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int bs(vector<pair<ll,ll>> &v, ll last){

    ll low = 0;
    ll high = v.size()-1;
    int ans = -1;
    while(low <= high){

        ll mid = high + (low - high)/2;

        if(v[mid].first > last){
            ans = mid;
            high = mid-1;
        }else{
            low = mid +1;
        }
    }

    return ans == -1 ? v.size() : ans;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<pair<ll,ll>> v;
        vector<pair<ll,ll>> c;

        for(int i=1;i<=n;i++){

            ll val;
            cin >> val;

            if(val < i){
                v.push_back({val, i});
                c.push_back({val, i});
            }
        }

        if(v.empty()){
            cout << 0 << endl;
            continue;
        }

        sort(c.begin(), c.end());

        // for(auto i : c) {
        //     cout << i.first << " " << i.second << "\n";
        // }

        // cout << "----------------" << endl;
        // for(auto i : v) {
        //     cout << i.first << " " << i.second << "\n";
        // }

        
        ll cn = 0;

        for(int i=0;i<n;i++){

            int in = bs(c,v[i].second);

            // cout << in << " " << endl;

            if(in == v.size()) break;

            cn += 1LL*v.size() - in;


        }

        cout << cn << "\n";


    }
}