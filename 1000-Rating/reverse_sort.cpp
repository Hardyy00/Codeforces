#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> front;
        stack<int> stack;

        int i=0, j=n-1;

        while(i<j){

            if(s[i]=='1' && s[j]=='0') {
                front.push_back(i);
                stack.push(j);
                i++;
                j--;
            }else if(s[i]=='0') i++;
            else if(s[j]=='1') j--;
        }

        if((front.size() + stack.size()) == 0){
            cout << 0 << "\n";
            continue;
        }

        cout << 1 << "\n";
        cout << stack.size() + front.size() << " ";
        for(auto i : front) cout << i+1 << " ";
        while (!stack.empty()){
            cout << stack.top() +1 << " ";
            stack.pop();
        }

        cout << "\n";
    }
}