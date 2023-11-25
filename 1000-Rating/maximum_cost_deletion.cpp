#include <bits/stdc++.h>

using namespace std;

long long find(string &s, int a, int b, char ch){

    long long ans = 0;

    int count = s[0]==ch ? 1 : 0;

    for(int i=1;i<s.size();i++){

        if(s[i]==ch){

            if(s[i-1]==ch){
                count++;
            }else {
                count=1;
            }
        }else if(s[i]!=ch){
            if(count!=0){
                ans += a *count + b;
            }
            count = 0;
        }

    //    if(ch =='0') cout << i << " " << count <<"\n";

    //     if(ch =='0') cout << "ans : " << ans << "\n";
    }

    if(count!=0){
        ans += a *count + b;
    }
    
    return ans;

}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n , a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int count1 = 0, count0 = 0;

        for(int i=0;i<s.size();i++){

            if(s[i]=='0') count0++;
            else count1++;
        }


        long long ans1 = count0 != 0 ? a * count0 + b : 0;

        ans1 += find(s, a, b, '1');


        long long ans2 = count1 !=0 ? a * count1 + b : 0;

        ans2 += find(s, a, b, '0');

        cout << max(ans1, max(ans2, (1LL* a* n +  1LL * b*n))) << "\n";
    }
}