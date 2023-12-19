#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=1;i<size;i++){
        if(arr[0]>arr[i]){
            cout<<"False";
            break;
         }
         if(i==(size-1)){
             cout<<"True";
         }
    }
   
    return 0;
}