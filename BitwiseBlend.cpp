#include <bits/stdc++.h>
using namespace std;

long long bit1[200002];
long long bit2[200002];
long long BIT1=0;
long long BIT2=0;

void FunA(long long A,long long B){
    bit1[BIT1] = A;
    BIT1 += 1;
    bit1[BIT1] = B;
    BIT1 += 1;
}

void FunB(long long C,long long D){
    bit2[BIT2] = C;
    BIT2 += 1;
    bit2[BIT2] = D;
    BIT2 += 1;
}

int main(){
    long long t; cin >> t;
    while(t--){
        BIT1 = 0;
        BIT2=0;

        long long COUNT1 = 0;
        long long COUNT2 = 0;

        long long num; cin >> num;
        long long a1[num];
        long long A2[num];

        long long Y1=0,Y2=2;
        long long y1=0,y2=0;

        long long oddcheck =0;
        for(long long i=0; i<num ;i++){
            cin>>a1[i];
            A2[i]=a1[i];
        }

if(a1[0]%2==0){
    if(a1[1]%2==0){

         for(long long i=2;i<num;i++){
             if(a1[i]%2==1){
                 Y1=a1[i];
                 y1=i;
                 oddcheck = 1;

                 a1[1] = a1[1]^Y1;
                 COUNT1 += 1;
                 FunA(1,y1);
                 break;
             }
         }
    }
    else{
        Y1=a1[1];
        y1=1;
        oddcheck = 1;
    }
      Y2=a1[1];
      y2=1;
      for(long long i =2;i<num;i++){
          if(a1[i]%2==1){
              a1[i]=a1[i]^Y2;
              COUNT1 += 1;
              FunA(i,y2);
          }
          i++;
          if(i<num){
              if(a1[i]%2==0){
                  a1[i]=a1[i]^Y2;
              COUNT1 += 1;
              FunA(i,y2);
              }
          }
      }
      A2[0]=A2[0]^Y1;
      COUNT2 +=1;
      FunB(0,y1);

      Y2=A2[0];
      y2=0;

      for(long long i=1;i<num;i++){
          if(A2[i]%2==1){
              A2[i]=A2[i]^Y2;
              COUNT2 += 1;
              FunB(i,y2);
          }
          i++;
          if(i<num){
              if(A2[i]%2==0){
                  A2[i]=A2[i]^Y2;
                  COUNT2 += 1;
                  FunB(i,y2);
              }
          }
      }

}
else{
    oddcheck = 1;
    Y2=A2[0];
    y2=0;
    for(long long i=1;i<num;i++){
        if(a1[i]%2==1){
            a1[i]=a1[i]^Y2;
            COUNT1 += 1;
            FunA(i,y2);
        }
        i++;
        if(a1[i]%2==0 && i<num){
            a1[i]=a1[i]^Y2;
            COUNT1 += 1;
            FunA(i,y2);
        }
    }

    Y2 = A2[0];
    y2=0;

    for(long long i=1;i<num;i++){
        if(A2[i]%2==0){
            A2[i]=A2[i]^Y2;
            COUNT2 += 1;
            FunB(i,y2);
        }
        i++;
        if(A2[i]%2==1 && i<num){
            A2[i]=A2[i]^Y2;
            COUNT2 += 1;
            FunB(i,y2);
        }
    }

    A2[0]=A2[0]^A2[1];
    COUNT2 += 1;
    FunB(0,1);

}
 if(oddcheck==0){
     cout<<"-1\n";
 }
 else if(COUNT1 > COUNT2){
     long long j;
     cout<<COUNT2<<"\n";
     for(long long i=0;i<COUNT2;i++){
         j=i*2;
         cout<<bit2[j]+1<<" "<<bit2[j+1]+1<<"\n";
     }
 }
 else{
     int j;
     cout<<COUNT1<<"\n";
     for(long long i=0;i<COUNT1;i++){
         j=i*2;
         cout<<bit1[j]+1<<" "<<bit1[j+1]+1<<"\n";
     }
 }


}

      return 0;
}