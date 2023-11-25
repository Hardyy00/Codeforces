#include <bits/stdc++.h>

using namespace std;

void f(vector<int> &v, int st, int ed){

    for(int i=st;i<=ed;i+=2){
        swap(v[i], v[i+1]);
    }

}

int main(){

        int n;
        cin >>n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        sort(v.begin(), v.end());

        if(n % 2 ==0){

            f(v, 1,n-2);
        }else f(v,0,n-2);

        cout << (n % 2 == 0 ? n/2 -1 : n/2) << "\n";

        for(auto i : v) cout << i <<" " ;

        cout << "\n";
    
}