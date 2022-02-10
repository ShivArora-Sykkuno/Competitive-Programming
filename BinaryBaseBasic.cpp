 #include<bits/stdc++.h>
using namespace std;


int main(){
    int test; cin>>test;
    while (test--){
        int num;
        int  ki, i, con=0;
        cin>>num>>ki;
        string str; cin>>str;
        for(i=0; i<num/2; i++){
            if(str[i] != str[num-i-1]){
                 con =con+1;
            }
        }
        if(ki >= con){
            if((ki-con)%2 ==0) {
                cout<<"YES"<<endl;
            }
            else if(num%2 !=0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
            }
    }
    return 0;
}