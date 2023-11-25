#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    

    int n;
    cin >> n;

    vector<int> ev;
    vector<int> od;

    for(int i=0;i<n;i++){
        
        int temp;
        cin >> temp;

        if((temp &1) == 1) od.push_back(i+1);
        else ev.push_back(i+1);
    }

    cout << (ev.size()==1 ? ev.back() : od.back()) << endl;
    
}