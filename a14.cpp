#include<iostream>
using namespace std;

int main(){
    int num;
    int count;
    int arr[5]={1,3,4,3,1};
    for(int i=0;i<5;i++)
    {
        num=arr[i];
        count=0;
        for(int j=0;j<5;j++){
        if(arr[j]==num){
            count++;
        }
        }
        if(count==1){
            cout<<num;
        }
    }
    return 0;
}
