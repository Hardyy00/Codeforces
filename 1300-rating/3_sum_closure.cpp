#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    int p = 0;
    int ne = 0;
    vector<int> v(n);
    for(int i=0;i<n;i++){

        int val;
        cin >> val;

        v[i] = val;

        if(val < 0) ne++;
        else if(val > 0) p++;

    }

    if(ne >2 || p > 2){
        cout << "NO"  << endl;
        return ;
    }

    vector<int> reduced;
    int z= 0;

    set<int> set;

    for(auto i : v){

        if(i == 0 && z < 2){
            reduced.push_back(i);
            z++;
        }else if(i !=0) reduced.push_back(i);

        set.insert(i);


    }

    n= reduced.size();

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            
            for(int k=j+1;k<n;k++){

                if(!set.count(reduced[i] + reduced[j] + reduced[k])){

                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;

    





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