#include <bits/stdc++.h>

using namespace std;

string solve(string &num){

    int p = -1;

    for(int i=0;i<num.size() -1 ;i++){

        int a = num[i] -'0';
        int b = num[i+1] - '0';

        if(a + b >9){
            p = i;
        }
    }

    if(p==-1){
        string b = num.substr(2);
        return to_string((num[0]-'0') + (num[1]-'0')) + b;
    }

    string f = num.substr(0,p);
    string b = num.substr(p+2);

    return f + to_string((num[p]-'0') + (num[p+1]-'0')) + b;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        string n;
        cin >> n;

        cout << solve(n) << endl;
    }
}