#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s1;
        string s2;

        cin >> s1 >> s2;

        int arr[n]{0};

        for(int i=0;i<n;i++){

            int sum = (s1[i]-'0') + (s2[i]-'0');

            arr[i] = sum;
        }

        int ans = 0;
        int i =0;

        for(i=0;i<n;i++){


            if(arr[i]==1) ans+=2;
            else{

                if(i < n-1){
                    if((arr[i]==0 && arr[i+1]==2) || (arr[i]==2 && arr[i+1]==0)){

                        ans+=2;
                        i++;
                        continue;
                    }
                }

                if(arr[i]==0) ans+=1;
            }
        }

        cout << ans << "\n";
    }
}