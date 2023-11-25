#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        
        map<int,int> map;

        for(int i=0;i<n;i++){

            int val ;
            cin >> val;

            map[val]++;
        }

        int ans = 0;

        for(int sum=2;sum<=100;sum++){

            int curr = 0;

            for(auto i : map){

                if(i.first == sum-i.first){
                    curr += ((i.second /2) * 2);

                }else if(map.find(sum-i.first) != map.end()){

                    int fre = map[sum-i.first];

                    curr += min(fre, i.second);
                }

            }

            ans = max(ans, curr/2);
        }   

        cout << ans << "\n";
    }
}