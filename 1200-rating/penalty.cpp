#include <bits/stdc++.h>
using namespace std;

int solve(int index, string &s, int ev, int od){

    if(index == s.size()) return index;

   
    int evenRem = (s.size()-index) /2;
    int oddRem = index % 2 == 0 ? evenRem : evenRem+1 ;

    if(ev + evenRem < od) {
        // cout  <<  "Ret : " << index << "\n";
        return index;

    }

    if(od + oddRem < ev){ 
        // cout  <<  "Ret : " << index << "\n";
        return index;
    }

    
    if(s[index] !='?'){

        return index % 2== 0 ? solve(index +1 ,s, ev +(s[index]-'0'), od) : solve(index +1 ,s, ev , od +(s[index]-'0')) ;
    }else{

        if(index % 2 ==0){
            return min(solve(index+1, s, ev+1,od), solve(index+1, s, ev,od));
        }

        return min(solve(index+1, s, ev, od+1), solve(index+1, s,ev,od));
    }
    
}

int main(){

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        cout << solve(0, s, 0, 0) << "\n";
    }
}