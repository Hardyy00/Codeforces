#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin >> t;

    while(t--){

        int n;
        cin >> n;
        string s1;
        string s2;

        cin >> s1 >> s2;

        int count = 0;

        for(int i=0;i<n;i++){

            if(s2[i]=='1'){

                if(s1[i] == '0'){
                    s1[i] = '2';
                    count++;
                }
                else{

                    if(i-1>=0 && s1[i-1] == '1') {
                        count ++;
                        s1[i-1] = '2';
                    }else if(i+1 < n && s1[i+1] == '1'){
                        s1[i+1] = '2';
                        count++;
                    }
                }
            }
        }

        cout << count << "\n";
        

    }
}