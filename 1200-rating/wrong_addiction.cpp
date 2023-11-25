#include <bits/stdc++.h>
using namespace std;

string s1;
string s2;


typedef long long ll;

ll solve(){

    vector<char> a(s2.size(), '0');
    int it = a.size()-1;

    int i = s1.size() - 1;
    int j = s2.size() - 1;
    while(i> -1 && j > -1){

        int d1 = s1[i] -'0';
        int d2 = s2[j] - '0';

        if(d2-d1>=0){
            a[it] = char(48 + (d2-d1));
            
            j--;
        }else{

            if(j-1< 0) return -1;

            int d3 = (s2[j-1]-'0') * 10 + d2;

            if((d3 - d1) > 9 || (d3-d1) < 0) return -1;
            j-=2;
            a[it] =char(48 + (d3-d1));

        }

        i--;
        it--;
    }

    if(i>=0 && j < 0) return -1;

    while(j>=0){

        a[it--] = s2[j--];
    }

    ll ans = 0;
    ll mul = 1;

    for(int k=a.size()-1;k>=0;k--){

        ll d = (a[k] -'0' ) * mul;

        // cout << d<< endl;

        ans += d;
        mul *= 10;
    }

    return ans;
}

int main(){

    int t;

    cin >> t;

    while(t--){

        cin >> s1;
        cin >> s2;

        cout << solve() << "\n";
    }
}