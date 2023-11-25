#include <bits/stdc++.h>

using namespace std;

void solve(int n, vector<int> &v, vector<int> &s){

    int i=1;
    int j=n-1;

    while(i<j){

        swap(s[i], s[j]);

        i++;
        j--;
    }

    deque<int> d;

    i=0;
    j=n-1;

    while(i<j){
        if(s[i] < s[j]) {
            d.push_front(s[i]);
            i++;
        }
        else{
             d.push_back(s[j]); 
             j--;
        }

        
    }

    if(i==j){

        if(s[i]==v[0]) d.push_front(s[i]);
        else d.push_back(s[i]);
    }

    for(int i=0;i<n;i++) {

        if(v[i] != d.front()){
            cout << -1 << "\n";
            return;
        }

        

        d.pop_front();
    }

    for(auto &it : s) cout << it << " ";

    cout << "\n";
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> s(n);

        for(int i=0;i<n;i++){
            
            int temp;
            cin  >> temp;

            v[i] = temp;
            s[i] = temp;
        }

        solve(n, v,s);
    }
}