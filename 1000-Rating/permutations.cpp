#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> mat(100, vector<int>(99,0));

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;

        cin >> n;

        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                int temp;
                cin >> temp;
                mat[i][j] = temp;
            }
        }

        int num1 = -1;
        int num2 = -1;
        int count1 = 0 , count2 = 0;

        for(int i=0;i<n;i++){
            if(num1 == -1){
                num1=mat[i][0];
                count1++;
            }else if(num2 == -1 && mat[i][0] != num1){
                num2 = mat[i][0];
                count2++;
            }else if(mat[i][0] == num1) count1++;
            else if(mat[i][0] == num2) count2++;
        }

        if(count2 > count1){
            cout << num2 << " " << num1 << " ";
        }else {
            cout << num1  << " " << num2 << " ";
            num1 = num2;
        }

        num2 = -1;

        for(int i=1;i<n-1;i++){
           
            for(int j=0;j<n;j++){

                if(mat[j][i] != num1){
                    num2 = mat[j][i];
                    break;
                }
            }

            num1 = num2;
            num2 = -1;

            cout << num1 << " ";

        }

        cout << "\n";

    }
}