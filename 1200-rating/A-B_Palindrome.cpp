#include <bits/stdc++.h>

using namespace std;

string solve(int a, int b, string &s){

    if((a + b) != s.size()) return "-1";
    int n = s.size();

    int as= 0,bs = 0;
    int q = 0;
    for(int i=0;i<n;i++){

        if(s[i] == '0') as++;
        else if(s[i] == '1')bs++;
        else q++;

    }

    if(as >a || bs > b) return "-1";
    else if((a+b - as - bs) != q) return "-1";

    a -= as;
    b -= bs;


    for(int i=0;i<n;i++){

        if(s[i]=='1' && s[n-i-1]=='?'){
            b--;

            if(b < 0) return "-1";
            s[n-i-1] = '1';
        }else if(s[i]=='0' && s[n-i-1] == '?'){
            a--;
            if(a < 0) return "-1"; 
            s[n-i-1] = '0';
        }

    }

    for(int i=0;i<n;i++){

        if(s[i] == '?' && s[n-i-1] == '?'){

            if(i == n-1-i){

                if((a&1) == 1){
                    s[i] = '0';
                    a--;
                }else if((b&1) ==1 ){
                    s[i] = '1';
                    b--;
                }else{
                    return "-1";
                }

            }else{

                if(a >=2){
                    s[i]= s[n-i-1] = '0';
                    a-=2;
                }else if( b >=2){
                    s[i] = s[n-i-1] = '1';
                    b -=2;
                }else{
                    return "-1";
                }

            }
        }
        
    }

    

    int i=0, j= n-1;
    
    while(i<=j){
        if(s[i] =='?' || s[j] == '?' || s[i] !=s[j]) return "-1";

        i++;
        j--;
    }

    return a == 0 && b==0 ? s : "-1";


}

int main(){

    int t;
    cin >> t;

    while(t--){

        int a, b;
        cin >> a >> b;

        string s;
        cin >> s;

        cout << solve(a,b,s) << "\n";

        
    }
}