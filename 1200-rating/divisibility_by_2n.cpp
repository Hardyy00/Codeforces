#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

ll f(ll num){

    ll cn = 0;

    while(num > 0 && num % 2==0){
        cn++;
        num /=2;
    }

    return cn;
}

int main(){

    int t;
    cin>> t;

    while(t--){

        int n;
        cin >> n;

        ll num2 = 0;
        for(int i=0;i<n;i++){
            ll  val;
            cin >> val;

            num2 += f(val);
        }

        if(num2 >=n) {
            cout << 0 << "\n";
            continue;
        }

        ll rem = n - num2;


        vector<ll> v;

        for(ll i=2;i<=n;i+=2){

            v.push_back(f(i));
        }

        sort(v.begin(),v.end(),greater<ll>());

        ll cn = 0;
        ll op = 0;

        for(auto i : v){

            op++;
            cn += i;

            if(cn >= rem) break;
        }

        if(cn < rem){
            cout << -1 << "\n";
           
        }else{
            cout << op << "\n";
        }


    }
}