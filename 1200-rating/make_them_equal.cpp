#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        char ch;
        cin >> ch;

        string s;
        cin >> s;

        int diff = 0;

        bool e= false, o = false;

        unordered_set<int> set;

        for(int i=0;i<n;i++){
            if(s[i] != ch){

                diff++;

                set.insert(i+1);
            }
        }

        if(diff == 0){
            cout << 0 << "\n";

        }else{

            int f = -1;

            for(int i=2;i<=n;i++){
                
                bool canBe = true;
                for(int k=1;k*i<=n;k++){

                    if(set.find(k*i) != set.end()){
                        canBe = false;
                        break;
                    }
                }

                
                if(canBe) {
                 
                    f = i;
                    break;
                }
            }

            if(f!=-1){
                cout << 1 << "\n" << f <<"\n";
            }else{
                cout << 2 << "\n" <<  n << " " << n-1 << "\n";
            }
            
        }
    }   
}