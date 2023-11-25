#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int op(string &s,string &n){

    int i=0;
    int j=0;

    int x = s.size();
    int y = n.size();

    int op = 0;

    while(i < x && j <y){

        if(s[i]==n[j]){
            i++;
            j++;
        }else{
            n[j++];
            op++;
        }
    }



    op += (x - i) + (y-j);

    return op;
}

int solve(int n){

    int mini = INT_MAX;
    
    ll mul =1;

    for(int i=1;mul <=1e16;i++){

        string s= to_string(mul);
        string v = to_string(n);
        int ans = op(s,v);
        mini = min(mini, ans);

        mul *=2;

    }

    return mini;
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        cout << solve(n) <<"\n";
    }
}