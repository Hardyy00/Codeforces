#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n;
    cin>> n;


    vector<int> v(n);


    for(int i=0;i<n;i++) cin >> v[i];

    int i= 0;
    int j= n-1;

    int mini =1;
    int maxi = n;

    while(i < j){

        if(v[i]==mini || v[j]==maxi){


            if(v[i]==mini){
                i++;
                mini++;
            }

            if(v[j]==maxi){
                j--;
                maxi--;
            }
        }else if(v[i]==maxi || v[j]==mini){

            if(v[i]==maxi){
                i++;
                maxi--;
            }

            if(v[j]==mini){
                j--;
                mini++;
            }
        }else {
            cout << i+1 << " " << j+1 << endl;
            return ;
        }
    }

    cout << -1 << endl;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie();
    
    int t;
    cin >>t;

    while(t--){

        solve();
    }
}