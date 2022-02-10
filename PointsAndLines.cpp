#include<bits/stdc++.h>
using namespace std;


int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int ARR1[n], ARR2[n];
        for(int i=0; i<n; i++){
            cin>>ARR1[i]>>ARR2[i];
        }

        sort(ARR1, ARR1 + n);
        sort(ARR2, ARR2 + n);
        int count1 = 0;
        for(int i=0; i<n; i++){
            while(i < n-1 && ARR1[i] == ARR1[i+1]) i++;
            count1++;
        }
        for(int i=0; i<n; i++){
            while (i < n-1 && ARR2[i] == ARR2[i+1]) i++;
            count1++;
        }
        cout<<count1<<endl;
    }
    return 0;
}