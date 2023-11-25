#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        deque<int> d;

        for(int i=0;i<n;i++){

            int temp;
            cin >> temp;

            if(d.empty() || temp <= d.front()) d.push_front(temp);
            else d.push_back(temp);
        }

        for(auto i : d) cout << i << " ";

        cout << "\n";
    }
}