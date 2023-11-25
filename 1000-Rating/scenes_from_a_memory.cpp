#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num){

    int i=2;

    while(i*i<=num){
        if(num%i==0) return false;

        i++;
    }

    return true;
}

void solve(int n, string s){

    for(int i=0;i<n;i++){

        if(s[i]=='1' || s[i] =='4' || s[i]=='6' || s[i] =='8' || s[i] == '9') {
            cout << 1 << "\n" << s[i] <<  "\n";
            return ;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(s[i]==s[j] || !isPrime((s[i]-'0')*10 + (s[j]-'0'))){

                cout << 2 << "\n";
                cout << (s[i]-'0')*10 + (s[j]-'0') << "\n";
                return;
            }
        }
    }
    



}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;

        cin >> s;

        solve(n, s);

        
        

    }
}