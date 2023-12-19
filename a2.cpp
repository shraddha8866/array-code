// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the number"<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
        cout<<"The second smallest element is "<<arr[1]<<endl;
        cout<<"The second largest element is "<<arr[size-2];
        
    return 0;
}