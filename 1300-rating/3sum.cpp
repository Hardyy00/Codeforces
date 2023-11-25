#include <bits/stdc++.h>

using namespace std;

string solve(map<int,int> &map){

    for(int i=0;i<=3;i++){

        for(int j=0;j<=3;j++){

            int th = 3 - i - j;

            if(th <0 || th >3) continue;

            if(i==j && j==th){
                if(!map.count(i) || map[i] <3) continue;

                return "YES";
            } else if(i==j){
                if(!map.count(i) ||  map[i]<2) continue;

                if(!map.count(th)) continue;

               return "YES";
            }else if(i==th){

                if(!map.count(i) || map[i] < 2) continue;

                if(!map.count(j)) continue;

                return "YES";
            }else if(j==th){
                if(!map.count(j) || map[j] < 2) continue;;
                if(!map.count(i)) continue;

                return "YES";
            }else {

                if(!map.count(i) || map[i] <1) continue;

                if(!map.count(j) || map[j] <1) continue;

                if(!map.count(th) || map[th] < 1) continue;


                return "YES";
            }
        }

        
    }

    for(int i=0;i<=13;i++){

        for(int j=0;j<=13;j++){

            int th = 13 - i - j;

            if(th <0 || th >13) continue;

            if(i==j && j==th){
                if(!map.count(i) || map[i] <3) continue;

                return "YES";
            }else if(i==j){
                if(!map.count(i) ||  map[i]<2) continue;

                if(!map.count(th)) continue;

                 return "YES";
            }else if(i==th){

                if(!map.count(i) || map[i] < 2) continue;

                if(!map.count(j)) continue;

                return "YES";
            }else if(j==th){
                if(!map.count(j) || map[j] < 2) continue;;
                if(!map.count(i)) continue;

                return "YES";
            }else {

                if(!map.count(i) || map[i] <1) continue;

                if(!map.count(j) || map[j] <1) continue;

                if(!map.count(th) || map[th] < 1) continue;


                
                return "YES";
            }
        }
    }


   for(int i=0;i<=23;i++){

        for(int j=0;j<=23;j++){

            int th = 23 - i - j;

            if(th <0 || th >23) continue;

            if(i== j && j==th){
                if(!map.count(i) || map[i] <3) continue;

                return "YES";
            }else if(i==j){
                if(!map.count(i) ||  map[i]<2) continue;

                if(!map.count(th)) continue;

                return "YES";
            }else if(i==th){

                if(!map.count(i) || map[i] < 2) continue;

                if(!map.count(j)) continue;

                return "YES";
            }else if(j==th){
                if(!map.count(j) || map[j] < 2) continue;;
                if(!map.count(i)) continue;

                return "YES";
            }else {

                if(!map.count(i) || map[i] <1) continue;

                if(!map.count(j) || map[j] <1) continue;

                if(!map.count(th) || map[th] < 1) continue;

                return "YES";
            }
        }
    }


    return "NO";

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int c =0;

    while(c++ < t){

        int n ;
        cin >> n;
        
        map<int, int> map;
        vector<int> v(n);
        

        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            v[i] = temp;

            map[temp % 10]++;
        }

        string ans = solve(map)  ;

        // for(auto i : map) cout << i.first << " " << i.second << "\n";
        cout << ans << endl;

        
    }
}