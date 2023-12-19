#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int temp=arr[0];
       for(int j=1;j<size;j++){
           arr[j-1]=arr[j];
           if(j==size-1){
               arr[size-1]=temp;
           }
       }
    
    for(int j=0;j<size;j++){
        cout<<arr[j];
    }
    return 0;
}