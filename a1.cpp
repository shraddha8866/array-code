#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"ENtre the size :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=1;i<size;i++){
    if(arr[i]>arr[0]){
        arr[0]=arr[i];
    }
    }
    cout<<"The largest element is "<<arr[0];
    
    
    
    return 0;
}