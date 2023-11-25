#include <bits/stdc++.h>

using namespace std;

pair<int,int> f(vector<int> &v,int n){

    pair<int,int> p;

    for(int i=1;i<n;i++){
        if(v[i] < v[i-1]){
            p.first = i-1;
            break;
        }
    }

    for(int i=n-2;i>=0;i--){

        if(v[i] > v[i+1]){
            p.second = i+1;
            break;
        }
    }

    return p;
}

int main(){
    

        int n;
        cin>> n;

        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];


        bool all = true;
        for(int i=1;i<n;i++) if(v[i] < v[i-1]){
            all = false;
            break;
        }
        if(all) {

            cout << "yes" << "\n";
            cout << "1 1" << "\n";
            return 0;
        }

        pair<int,int> p = f(v,n);

        int i = p.first;
        int j = p.second;

        while(i < j){

            swap(v[i], v[j]);
            i++;
            j--;
        }

        all = true;

        for(int i=1;i<n;i++) {
            if(v[i] < v[i-1]){
                all = false;
                break;
            }
        }

        if(!all){
            cout << "no" << "\n";
        }else{
            cout << "yes" << "\n";
            cout << p.first + 1<< " " << p.second + 1 << "\n";
        }

        

    
}