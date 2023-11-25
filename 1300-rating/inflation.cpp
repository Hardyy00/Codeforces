#include <bits/stdc++.h>

using namespace std;

long long bs(long long sum, long long pi, vector<long long> &v, long long k){

    long long low = 0;
    long long high = 1e13;
    long long ans = 0;

    while(low <= high){

        long long mid = high + (low - high)/2;

        if((1.0 * pi /(sum + mid)) <= ((1.0 * k )/100)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid +1;
        }
    }

    return ans;
}

long long solve(vector<long long> &v, int n, long long k){

    long long  sum = v[0];
    long long  inc = 0;

    for(int i=1;i<n;i++){

        long long  coff = v[i]/(sum + inc);
        
        long long  add = bs(sum+inc, v[i], v,k);
        inc += add;
        

        sum += v[i];
    }

    return inc; 
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int c = 0;

    while(c++ < t){

        int n;
        cin >> n;
        long long k ;
        cin >> k;
        
        vector<long long> v(n);

        for(int i=0;i<n;i++) cin >> v[i];
    
        cout << solve(v,n,k) << "\n";

    }
}