#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> s(n);

        for(int i=0;i<n;i++) cin >> s[i];

        sort(s.begin(), s.end());

        long long p1 = s[n-1] * 1LL * s[n-2] * s[n-3]  * s[n-4]  * s[n-5] ;
 
        long long p2 = s[0] *1LL *s[1]  *  s[2]  * s[3]  * s[n-1];  
        long long p3 = s[0] * 1LL * s[1] * s[n-1] *  s[n-2] * s[n-3];

        cout << max(p1,max(p2, p3)) <<"\n";
 
        
    }
}