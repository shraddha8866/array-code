#include<iostream>
using namespace std;
int main(){
    int arr1[4]={1,2,3,4};
    int arr2[4]={1,3,4,6};
    int i=0;
    int j=0;
 while(i<4 && j<4){
     if(arr1[i]==arr1[i+1]){
         i++;
     }
     else if(arr2[j]==arr2[j+1]){
         j++;
     }
     else if(arr1[i]==arr2[j]) {
         cout<<arr1[i];
         i++;
         j++;
     }
     else if(arr1[i]<arr2[j]){
         i++;
     }
      else if(arr2[j]<arr1[i]){
         j++;
     }
 }
     return 0;
}