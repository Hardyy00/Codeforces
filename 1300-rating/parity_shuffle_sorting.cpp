#include <bits/stdc++.h>

using namespace std;

void solve(int n){
    
    vector<int> odd;
    vector<int> even;

    for(int i=0;i<n;i++){
        int val;
        cin >> val;

        if((val & 1) ==1) odd.push_back(i+1);
        else even.push_back(i+1);
    }

    if(even.empty()){
        cout << odd.size()-1 << "\n";

        for(int i=0;i<odd.size()-1;i++) cout << odd[i] << " " << odd.back() <<"\n";

    }else if(odd.empty()){
        cout << even.size()-1 << "\n";

        for(int i=0;i<even.size()-1;i++) cout << even[i] << " " << even.back() <<"\n";
    
    }else if(odd[0] == 1){

        int op = odd.size()-1 + even.size();
        cout << op << "\n";

        for(int i=0;i<odd.size()-1;i++){
            cout << odd[i] << " " << odd.back() << "\n";
        }

        for(int i=0;i<even.size();i++) cout << 1 << " " << even[i] << "\n";
    }else if(even[0]==1){
        int op = even.size() -1 + odd.size();

        cout << op << "\n";

        for(int i=0;i<even.size()-1;i++){
            cout << even[i] << " " << even.back() << "\n";
        }

        for(int i=0;i<odd.size();i++) cout << 1 << " " << odd[i] << "\n";
    }
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

        solve(n); 
    }
}