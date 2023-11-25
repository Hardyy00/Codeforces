#include <bits/stdc++.h>

using namespace std;

bool comp(pair<pair<int,int>,pair<int,int>> &p1, pair<pair<int,int>,pair<int,int>> &p2){

    return p1.first.first < p2.first.first;
}

void solve(){

    int n;
    cin >> n;

    vector<int> v(n+1,0);
    vector<pair<pair<int,int>, pair<int,int>>> s(n, {{0,0},{0,0}});

    bool f = true;

    for(int i=0;i<n;i++){

        int val;
        cin >> val;

        v[val]++;
        if((val==1 && v[val]==2) || (v[val]==3)){
            f = false;
        } 

        s[i].first.first = val;
        s[i].first.second = i;
    }

    if(!f){
        cout << "NO" << endl;
        return ;
    }

    sort(s.begin(),s.end(), comp);

    vector<int> notUsed;

    for(int i=1;i<=n;i++){

        if(v[i]==0) notUsed.push_back(i);
    }

    int it = 0;

    for(int i=0;i<n;i++){

        if(i==n-1){
            s[i].second.first = s[i].first.first;
            s[i].second.second = s[i].first.first;
            
        }else{

            if(s[i].first.first == s[i+1].first.first ){

                if(notUsed[it] < s[i].first.first){
                    s[i].second.first = s[i].first.first;
                    s[i].second.second = notUsed[it];

                    s[i+1].second.first = notUsed[it];
                    s[i+1].second.second = s[i+1].first.first;
                    it++;
                    i++;
                }else{
                    cout << "NO" << endl;
                    return ;
                }
            }else{
                s[i].second.first = s[i].first.first;
                s[i].second.second = s[i].first.first;
            }
        }

    }

    vector<int> p1(n);
    vector<int> p2(n);

    for(auto i : s){

        p1[i.first.second] = i.second.first;
        p2[i.first.second] = i.second.second;
    }

    cout << "YES" << endl;
    
    for(auto i : p1) cout << i << " " ;
    cout << endl;

    for(auto i : p2) cout << i <<  " ";

    cout << endl;




}   

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>> t;

    while(t--){

        solve();
    }
}