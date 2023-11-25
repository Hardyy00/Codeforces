#include <bits/stdc++.h>

using namespace std;

bool comp(pair<pair<int,int>,int> &p1, pair<pair<int,int>,int> &p2){

    if(p1.second == p2.second){
       return  p2.first.first < p1.first.first;
    }

    return p2.second < p1.second;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n ;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            int temp ;
            cin >> temp;
            arr[i] = temp;
        }

        string s;
        cin >> s;

        vector<pair<pair<int,int>,int>> v;

        for(int i=0;i<n;i++){

            v.push_back({{arr[i],i},s[i]});
        }

        sort(v.begin(), v.end(), comp);

        for(int i=0;i<n;i++){

            arr[v[i].first.second] = n-i;
        }


        for(auto i : arr) cout << i << " ";

        cout << "\n";

    }
}