#include <bits/stdc++.h>

using namespace std;

int main(){

    int t ;
    cin >> t;

    while(t--){

        int a1 , a2 , b1, b2, c1,c2;

        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> c1 >> c2;

        if(a1 == b1){

            if(a1==c1){

                int mini = min(a2, b2);
                int rest = a2 + b2 - mini;

                if(c2>= mini && c2 <= rest){
                    cout << rest - mini + 2 << "\n";
                }else {
                    cout << rest - mini << "\n";
                }

            }else {

                cout << abs(a2-b2) << "\n";
            }

        }else if ( a2 == b2){

            if(a2 == c2){
                
                int mini = min(a1, b1);
                int rest = a1 + b1 - mini;

                if(c1 >= mini && c1<=rest){
                    cout << rest - mini +2 << "\n";
                }else{
                    cout << rest - mini << "\n";
                }


            }else{
                cout << abs(a1-b1) << "\n";
            }
        }else{

            int dis= abs(a1-b1 ) + abs(a2 - b2);

            cout << dis << "\n";
        }
    }
}