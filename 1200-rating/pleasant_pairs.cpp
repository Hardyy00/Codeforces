#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        unordered_map<int,int> map;

        for(int i=1;i<=n;i++){

            int v;
            cin >> v;

            map[v] = i;
        }

        int last = 2*n -1;

        ll ans = 0;

        for(int mul=3;mul<=last;mul++){

            for(int i=1;i*i<=mul;i++){

                if((mul % i) == 0 && i*i != mul && map.find(i) != map.end() && map.find(mul /i) != map.end() && (map[i] + map[mul /i] ) == mul ) ans++;
            }

        }

        cout << ans << "\n";


        
    }
}