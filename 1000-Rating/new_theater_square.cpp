#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n,m,x,y;

        cin >> n >> m >> x >> y;

        int ans = 0;
        double ttp =(1.0 * y)/2;

        for(int i=0;i<n;i++){

            string s;
            cin >> s;
            for(int j=0;j<m;j++){
                
                if(s[j]=='.'){

                    if(j==m-1){
                        ans+=x;
                    }else{

                        if(s[j+1]  !='.') ans+= x;
                        else{

                            if(2*x >=y) {
                                ans+=y;
                                j++;
                            }else{
                                ans+=x;
                            }
                        }
                    }
                }
            }

            
        }

        cout << ans  << "\n";
    }
}