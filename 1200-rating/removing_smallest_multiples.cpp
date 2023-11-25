#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<bool> del(1e6 + 1);

void solve(){

    int n;
    cin >> n;

    for(int i=0;i<=n;i++) del[i] = false;
    
    string s;
    cin >> s;

    ll mon = 0;

    for(int i=1;i<=n;i++){

        int j=i;

        while(j <= n && s[j-1] != '1'){
            
            if(!del[j-1]){
                mon += 1LL*i;
                del[j-1] = true;
            }

            j+=i;
        }
    }

    cout << mon << "\n";




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