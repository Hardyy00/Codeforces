#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int f(string s, char ch){

    int op = 0;
    int maxi = 0;

    int n = s.size();

    for(int i=0;i<n;i++){

        if(s[i]==ch){
            if(op){

                int p = ceil(log2(op));
                if(!(op & (op-1))) p++;

                maxi = max(maxi, p);
                op = 0;
            }
        }else{
            op++;
        }
    }

    if(op){

        int p = ceil(log2(op));
        if(!(op & (op-1))) p++;

        maxi = max(maxi, p);
        op = 0;
    }

    return maxi;


}

void solve(){

    string s;
    cin >> s;
    int n= s.size();
    vector<int> fre(26, false);

    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        fre[s[i]-'a'] = true;
    }


    for(char ch='a';ch <='z';ch++){

        if(fre[ch-'a']) mini = min(mini, f(s, ch));
    }

    cout << mini << endl;
    
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        
        solve();
    }
}