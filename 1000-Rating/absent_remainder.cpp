#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){

        int n ;
        cin >> n;

        int minIndex = -1;
        int minEle = INT_MAX;

        vector<int> arr(n);

        for(int i=0;i<n;i++){

            int temp;
            cin >> temp;

            if(temp < minEle){
                minEle = temp;
                minIndex = i;
            }

            arr[i] = temp;
        }

        int count = n/2;
        for(int i=0;i<n;i++){

            if(i != minIndex){
                if(arr[i] >=minEle){

                    cout << arr[i] << " " << minEle << "\n";

                    count--;

                    if(!count) break;
                }
            }
        }

    }
}