#include <bits/stdc++.h>

using namespace std;

void solve(string &s){

    string a ="";
    string b ="";

    int i =0;
    int n = s.size();

    while(i < n){

        if(s[i]=='2'){
            a += "1";
            b+= "1";
        }else if(s[i]=='0'){
            a+="0";
            b += "0";
        }else{
            a+="1";
            b+="0";

            i++;
            while(i < n){

                a+='0';
                b += s[i++];
            }
        }

        i++;
    }

    cout << a << endl << b << endl;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        solve(s) ;
    }
}