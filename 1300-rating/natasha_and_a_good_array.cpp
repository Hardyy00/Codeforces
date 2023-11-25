#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> v(n);

        int mini = INT_MAX;
        int mp = 0;

        for(int i=0;i<n;i++) {

            cin >> v[i];

            if(v[i] < mini){
                mini = v[i];
                mp = i;
            }
        }

        cout<< n-1 <<"\n";

        for(int i=mp-1;i>=0;i--){

            if(v[i]<v[i+1]){

                cout << i+1 <<" " << mp+1 <<" " << v[i+1]+1 <<" " << v[mp] <<"\n";

                v[i] = v[i+1] + 1;

            }else{
                cout << i+1 <<" " << i+2 << " " << v[i+1] + 1 << " " << v[i+1] <<"\n";

                v[i] = v[i+1] + 1;
            }
        }

        for(int i=mp+1;i<n;i++){

            if(v[i] < v[i-1]){

                cout<< i +1 <<" " << mp+1 <<" " << v[i-1]+1 <<" " << v[mp] <<"\n";

                v[i] = v[i-1]+1;
            }else{

                cout << i+1 << " " << i << " "<< v[i-1]+1 <<" " << v[i-1] <<"\n";

                v[i] = v[i-1]+1;

            }
        }


    }
}