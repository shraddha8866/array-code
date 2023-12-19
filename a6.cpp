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
    int choice,count;
    cout<<"Enter the direction of rotation : ";
    cin>>choice;
    cout<<"Enter the number of rotation :";
    cin>>count;
    //choice 0 for left rotation
    if(choice==0){
        for(int k=0;k<count;k++){
      int temp=arr[0];
      for(int j=1;j<size;j++){
          arr[j-1]=arr[j];
          if(j==size-1){
              arr[size-1]=temp;
          }
      }
    }
    }
    //choice 1 for right rotation
    else if(choice==1){
           for(int k=0;k<count;k++){
      int temp=arr[size-1];
      for(int j=size-1;j>=0;j--){
          arr[j+1]=arr[j];
          if(j==0){
              arr[0]=temp;
          }
      }
    }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}
