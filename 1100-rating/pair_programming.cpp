#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &a, vector<int> &b, int k ,int n, int m){

    vector<int> ans;

    int i=0;
    int j= 0;

    while(i<n && j < m){

        if(a[i] < b[j]){

            if(a[i]==0){
                k++;
                ans.push_back(a[i]);
            }else{

                if(a[i] <=k) ans.push_back(a[i]);
                else {
                    cout << -1 << endl;
                    return ;
                }
            }

            i++;
        }else{

            if(b[j]==0){
                k++;
                ans.push_back(b[j]);
            
            }else{

                if(b[j] <=k) ans.push_back(b[j]);
                else{
                    cout << -1 << endl;
                    return ;
                }
            }

            j++;
        }
    }

    while(i < n){

        if(a[i]==0){
            k++;
            ans.push_back(a[i]);
        }else{

            if(a[i] <= k) ans.push_back(a[i]);
            else{
                cout << -1  << "\n";
                return ;
            }
        }

        i++;
    }

    while(j < m){

        if(b[j]==0){
            k++;
            ans.push_back(b[j]);
        }else{

            if(b[j] <= k) ans.push_back(b[j]);
            else{
                cout << -1  << "\n";
                return ;
            }
        }

        j++;
    }

    for(auto i : ans) cout<< i << " " ;

    cout << endl;
}



int main(){

    int t;
    cin >> t;

    while(t--){

        
        int k,n,m;

        cin >> k >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=0;i<m;i++) cin >> b[i];

        solve(a,b,k,n,m);

    }
}