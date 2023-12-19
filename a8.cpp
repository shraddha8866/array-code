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
    int key;
    cout<<"ENter the key element ";
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"ELement is found at the position "<<i;
        }
    }
    return 0;
}


