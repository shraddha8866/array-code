#include<iostream>
using namespace std;
int main(){
    int arr[7]={-2,1,-2,5,5,6,7};
    int i,j,k;
    int d=2;
    int len=0;
    int sums;
    for(i=0;i<7;i++){
        for(j=i;j<7;j++){
           sums=0;
           for(int k=i;k<=j;k++){
               sums=sums+arr[k];
           }
           if(sums==d){
               len=max(len,j-i+1);
           }
        
        }
    }
    cout<<len;
    return 0;
}
