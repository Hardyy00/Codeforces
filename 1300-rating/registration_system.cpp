#include <bits/stdc++.h>

using namespace std;

string solve(unordered_map<string,int> &map, string &s){

    if(!map.count(s)){
        map[s] = 0;
        return "OK";
    }

    string ans = s + to_string(map[s] + 1);
    map[s]++;

    map[ans];

    return ans;



}

int main(){

    int t;
    cin >> t;

    unordered_map<string, int> map;
    while(t--){

        string s;
        cin >> s;

        cout << solve(map, s) << endl;
    }
}