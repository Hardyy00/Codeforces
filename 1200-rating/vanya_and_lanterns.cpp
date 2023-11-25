#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){

    int n, l;
    cin >> n>> l;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    sort(v.begin(), v.end());

    int maxi = 0;

    for(int i=1;i<n;i++) maxi = max(maxi, v[i] - v[i-1]);



    double ans = max(maxi/2.0,max(1.0 *v[0]-0,1.0*l-v[n-1]));


    printf("%.10f", ans);

    
}