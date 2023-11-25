#include <bits/stdc++.h>

using namespace std;

string solve(string  &n){

    string cp= n;

    for(int i=0;i<n.size();i++){

        for(char j='0';j<='9';j++){

            if(i==0 && j=='0') continue;

            n[i] = j;

            if(stoi(n) % 7 ==0) return n;
        }

        n = cp;
    }



    for(int i=0;i<n.size();i++){

        for(char j='0';j<='9';j++){

            if(i==0 && j=='0') continue;

            n[i] = j;

            string tp = n;

            for(int k=i+1;k<n.size();k++){

                for(char x='0';x<='9';x++){

                    n[k] = x;

                    if(stoi(n) % 7 ==0) return n;
                }

                n = tp;
            }

           
        }

        n = cp;
    }

    if(n.size() < 3) return "0";

    for(char i='1';i<='9';i++){

        n[0] = i;

        for(char j='0';j<='9';j++){
            
            n[1] = j;
            for(char k='0';k<='9';k++){

                n[2] = k;

                if(stoi(n) % 7 ==0) return n;
            }
        }
    }

    return "0";

    
}

int main(){

    int t;
    cin >> t;

    while(t--){

        string n;

        cin >> n;

        if(stoi(n) % 7 == 0) {
            cout << n << "\n";
            continue;
        }

        cout<< solve(n) << "\n";
    }
}