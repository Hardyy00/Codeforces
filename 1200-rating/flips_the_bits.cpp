#include <bits/stdc++.h>

using namespace std;

bool solve(string &s1, string &s2, vector<int> &p, vector<pair<int,int>> &v){

    if(p.size() == 0) return true; 

    bool f = false;

    for(int i=p.size()-1;i>=0;i--){

        if(!f){
            if(v[p[i]].first != v[p[i]].second) return false;
            else f = true;
        }else{

            if(p[i+1]-p[i] == 1) continue;
            else{
                if(v[p[i+1]-1].first != v[p[i+1]-1].second) return false;

                if(v[p[i]].first != v[p[i]].second) return false;
                else {
                    f = true;
                }

            } 
        }

        
        
    }

    if(p[0] !=0 && v[p[0]-1].first != v[p[0]-1].second) return false;

    return true;  

}
int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s1,s2;
        cin >> s1 >> s2;

        vector<pair<int,int>> v(n,{0,0});

        vector<int> p;

        for(int i=0;i<n;i++){

            if(s1[i] != s2[i]) p.push_back(i);

            if(s1[i]=='0'){
                
                if(i==0) v[i].first++;
                else{
                    v[i].first = v[i-1].first +1;
                    v[i].second = v[i-1].second;
                }
            }else{

                if(i==0) v[i].second++;
                else{
                    v[i].first = v[i-1].first;
                    v[i].second = v[i-1].second +1;
                }
            }
        }

        cout << (solve(s1,s2, p,v) ? "YES" : "NO") <<"\n";


    }
}