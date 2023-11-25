#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long a ){

    int i = 2;

    while(i*i <= a){

        if(a%i == 0) return false;
        i++;
    }

    return true;
}
int main(){

    int t;
    cin >> t;

    while(t--){

        int d;
        cin >> d;

        long long pro = 1;
        int count = 2;

        for(long long i=d+1;true;i+=1L){

            if(isPrime(i)){
                pro *= i;
                count--;

                i = i + d -1;

                if(!count) break;
            }
        }


        cout << pro << "\n";
    }
}