#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int st = -1, ed =-1;

        for(int i=0;i<n;i++){
            
            int a=0, b=0;
            bool f = false;
            for(int j=i;j<n;j++){

                if(s[j]=='a') a++;
                else b++;

                // cout << a << " " << b << "\n";

                if(a==b){
                    st = i+1;
                    ed= j+1;
                    f = true;
                    break;
                }

            }

            if(f) break;
        }

        cout << st << " " << ed << "\n";
    }
}