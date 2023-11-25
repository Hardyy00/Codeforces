#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, q;

    cin >> n >> q;

    string s;
    cin >> s;

    
    while(q--){

        int l,r;
        cin >> l >> r;
        long long len = 0;
        int fre[26]{0};


        for(int i=l-1;i<r;i++){
            fre[s[i]-'a'] +=1;
        }

       for(int i=0;i<26;i++){
            
            if(fre[i]>0){
                len += (fre[i] * ( i + 1));
            }
        }

        cout << len << "\n";
    }
}