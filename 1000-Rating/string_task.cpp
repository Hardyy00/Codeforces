#include <bits/stdc++.h>

using namespace std;

bool isVowel(char ch){

    ch = isupper(ch) ? (char)(ch+32) : ch;

    if( ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='y') return true;

    return false;
}

int main(){

    string s;
    cin >> s;

    string ans="";

    for(int i=0;i<s.size();i++){

        if(!isVowel(s[i])){

            ans+='.';
            char ch = isupper(s[i]) ? (char) (s[i]+32) : s[i];
            ans+=ch;

        }
    }
    
    cout << ans << "\n";

}