#include<iostream>
using namespace std;
int main(){
    int arr1[4]={1,1,2,6};
    int arr2[4]={2,3,5,6};
    int i=0;
    int j=0;
    while(i<4 && j<4){
        if(arr1[i]==arr1[i+1]){
            i++;
        }
         else if(arr2[j]==arr2[j+1]){
            j++;
        }
       else if(arr2[j]<arr1[i]){
            cout<<arr2[j];
            j++;
        }
        else if(arr1[i]<arr2[j]){
            cout<<arr1[i];
            i++;
        }

        else{
            cout<<arr1[i];
            i++;
            j++;
        }
    }
    while(i<4){
        cout<<arr1[i];
        i++;
    }
     while(j<4){
        cout<<arr2[j];
        j++;
     }
}