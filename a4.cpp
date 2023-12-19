#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of teh array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    cout<<"After the deletion of repeated array: "
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}