#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){

    int n;
    cin >> n;

    vector<int> a(n);
    cin >> a[0];

    if(n ==1) {
        cout << "YES" << endl;
        return ;
    }
    

    vector<int> b;

    b.push_back(a[0]);

    for(int i=1;i<n;i++){

        int val;
        cin >> val;
        a[i] = val;

        int lcm = (a[i] * a[i-1])/(__gcd(a[i], a[i-1]));

        b.push_back(lcm);

    }

    b.push_back(a.back());

    for(int i=0;i<n-1;i++){

        if(__gcd(b[i], b[i+1]) != a[i]) {
            cout << "NO" << "\n";
            return ;
        }
    }

    cout << "YES" << "\n";


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