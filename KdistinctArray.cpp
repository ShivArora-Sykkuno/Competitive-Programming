#include <bits/stdc++.h>
using namespace std;


int main(){
    int test; cin>>test;
    while(test--){
        long long a, b; cin>>a>>b;
        vector<long long> arr(1, 1);
        b -=a;
        long long current = 2;
        for(int i = 1; i<a ;i++){
            if(b<arr.size()){
                int value = arr[arr.size()-b-1];
                arr.push_back(value);
                break;
            }
            b -= arr.size();
            arr.push_back(current);
            current++;
        }
        while (arr.size() < a) {
            arr.push_back(arr.back());
        }

        for(auto j: arr){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}