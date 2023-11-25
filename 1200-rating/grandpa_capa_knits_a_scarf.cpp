#include <bits/stdc++.h>

using namespace std;

int pali(string &s,int n,char ch){

    int i= 0;
    int j= n-1;
    int op = 0;

    while(i<=j){

        if(s[i] == s[j]){
            i++;
            j--;
        }else if(s[i] == ch){
            i++;
            op++;
        }else if(s[j] == ch){
            j--;
            op++;
        }else{
            return INT_MAX;;
        }
    }

    return op;
}

int solve(int n, string &s){

    int mini = INT_MAX;

    for(char ch = 'a';ch <='z';ch++){

        mini= min(pali(s,n,ch), mini);
    }

    return mini == INT_MAX ? -1 : mini;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >>n;

        string s;
        cin >> s;

        cout << solve(n,s) << "\n";
    }
}