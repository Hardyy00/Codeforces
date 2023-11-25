#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
 
        int n,m;
        cin >> n >> m;
 
        map<int,int> map;
 
        vector<int> v;
            
        for(int i=0;i<n;i++){
            int val;
            cin >> val;
 
            map[val % m]++;
 
        }
 
        for(auto i : map){
            v.push_back(i.first);
        }
 
        int g = 0;
 
        for(int i : v){
 
            if(i == 0) g++;
            else if(map[i] == 0) continue;
            else{
 
 
                if(i==m-i) g++;
                else {
 
                    int a = map[i];
                    if(map.find(m-i) == map.end()) g += a;
                    else{
 
                        int b= map[m-i];
                        int mini = min(a,b);
 
                        g++;
 
                        int ni = max(0,a - (mini+1));
                        int nmi = max(0,b -  (mini+1));
 
 
                        map[i] = 0;
                        map[m-i] = 0;
 
                        g+=ni;
                        g+=nmi;
                    }
 
                }
 
                
            }
        }
 
        cout << g << "\n";
    }
}