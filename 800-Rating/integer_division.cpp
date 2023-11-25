#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n; 

        unordered_map<int,int> map;

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;

            map[abs(temp)]++;
        }

        int cn = 0;
        for(auto i : map){

            if(i.first ==0) cn++;
            else{

                if(i.second >1) cn+=2;
                else cn++;

            }
        }

        cout << cn << "\n";

        
    }
}