#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        int m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        bool flag = false;


        for(int i=0;i<=7;i++){

            if(a.find(b) != string::npos){
                cout << i << "\n";

                flag = true;

                break;
                
            }

            if(flag) break;

            a += a;
        }

        if(flag == false) cout << -1 << "\n";
    

    }


}