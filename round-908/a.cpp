#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(int n, string &s){

    int a= 0;
    int b= 0;

    for(int i=1;i<=20;i++){

       
       for(int y=1;y<=20;y++){

            int s1 = 0;
            int s2 = 0;

            int aw = 0;
            int bw = 0;


            for(int j=0;j<n;j++){

                if(s[j] == 'A') s1++;
                else s2++;

                if(s1 ==i) {
                    aw++;
                    s1 = 0;
                    s2 = 0;

                }else if(s2 == i){
                    bw++;
                    s2 = 0;
                    s1 = 0;
                
                }

                if(aw >= y || bw>=y){
                    break;
                }
            }

            if(s1 == 0 && s2 == 0) {
                if(aw >=y) a++;
                else if(bw >=y) b++;
            }


       }
    }

    cout << a <<"  " << b << "\n";

    if(a > b) cout << "A" <<"\n";
    else if( b > a) cout << "B" << "\n";
KO
    else cout << "?" << "\n";
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << s.back()<<"\n";

    }
}