#include<iostream>
using namespace std;
int main(){
    int ars[9]={1,2,3,1,1,1,4,2,3};
    int i,j,r;
    int k=6;
    int len=0;
    int sum;
    for(i=0;i<9;i++){
           for(j=i;j<9;j++){
              sum=0;
              for(r=i;r<=j;r++){
                  sum=sum+ars[r];
              }
                  if(sum==k){
                      len=max(len,j-i+1);
              }
           }
    }
    cout<<len;
    return 0;
}