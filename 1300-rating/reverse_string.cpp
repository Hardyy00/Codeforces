#include <bits/stdc++.h>

using namespace std;

bool f(string &s1, string &s2,int p){

    int n = s1.size();

    for(int right=0;right<n;right++){


        for(int left=0;left<n;left++){


            if(p+right - left < 0 || p+right-left >=n) continue;

            int i=0;

            bool f=  true;
            int pos = p;

            while(pos+i <= pos+right){


                if(s1[pos+i] != s2[i]){
                    f = false;
                    break;
                }

                i++;
            }

            if(!f) continue;

            pos+= right;
            i--;

            
            int it = 0;

            while(pos-it >=pos-left){

                if(s1[pos-it] != s2[i]){
                    break;
                }

                it++;
                i++;
            }


            if(i == s2.size()) return true;

        }
    }

    return false;
}

string solve(string &s1, string &s2, vector<int> &v){

    for(auto i : v){

        if(f(s1,s2,i)) return "YES";
    }

    return "NO";
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        
        string s1;
        string s2;

        cin >> s1 >> s2;

        vector<int> v;

        for(int i=0;i<s1.size();i++){
            if(s1[i] == s2[0]) v.push_back(i);
        }

        cout << solve(s1,s2,v) <<"\n";
    }
}