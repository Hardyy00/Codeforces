#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll num ;

        cin >> num;

        if(num==1){
            cout << 1 << " " << 1 << "\n";
            continue;
        }

        ll i=2;
        ll pre= 1;

        while(true){

            ll r = 2*i-1;
            ll r1 = pre+1;
            ll r2 =  pre + r;

            if(num >=r1 && num<= r2){

                ll mid = (r1+r2)/2;
                ll ar = i, ac = i;

                if(num==mid) cout << ar << " " << ac << "\n";
                else if(num < mid ){
                    ar -= (mid - num);
                    cout << ar << " " << ac << "\n";
                }else{
                    ac -= (num - mid);

                    cout << ar << " " << ac << "\n";
                }

                break;

            }

            pre += r;
            i++;

        }
        
    }
}