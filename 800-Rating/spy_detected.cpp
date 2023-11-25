#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while( t-- ){

        int n ;
        cin >> n;

        vector<int> fre(101, 0);
        vector<int> arr(n);

        for(int i=0;i<n;i++){

            int c ;
            cin >> c;
            fre[c]++;
            arr[i] = c;

        }

        int num = -1;

        for(int i=1;i<=100;i++){

            if( fre[i] == 1){
                num = i;
                break;
            }
        }

        // cout << num << endl;

        for(int i=0;i<n;i++){

            if( arr[i] == num) {
                cout << i + 1<< "\n";

               break;
            }
        }
    }
}