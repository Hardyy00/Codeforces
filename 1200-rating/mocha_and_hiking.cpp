#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin>> v[i];

        vector<int> ans;

        bool f = false;

        if(v[0]==1) {
            ans.push_back(n+1);
            f = true;
        }

        for(int i=0;i<n;i++){

            if(!f) {

                ans.push_back(i+1);

                if(i==(n-1)){

                    if(v[i] == 0) ans.push_back(n+1);


                }else{
                    if(v[i]==0 && v[i+1]==1){
                        ans.push_back(n+1);
                        f =true;
                    }

                }
                
            }else{
                ans.push_back(i+1);
            }
        }


        if(ans.size() == n+1){
            
            for(auto i : ans) cout << i << " ";
            cout << "\n";


        }else{
           
            cout << -1 << "\n";
        }

    }
}