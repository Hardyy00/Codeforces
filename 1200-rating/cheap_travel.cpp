#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    int n, m, a, b;

    cin >> n >> m >> a >> b;

    double cpt = (1.0 * b)/m;

    ll am= 0;
    int tr = 0;

    if(cpt < a){

        while(tr + m < n){
            tr+=m;
            am += b;
        }

        int x = (n-tr) * a;
        int y = b;

        if(x < y) am+= x;
        else am += y;

        
    }else {

        am += n * a;

    }

    
    

    cout << am << "\n";
}