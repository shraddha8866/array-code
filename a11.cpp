#include<iostream>
using namespace std;
int main(){
    int array[8]={1,2,3,4,6,7,8,9};
    int i=0;
   while(i<8){
       if(array[i]+1==array[i+1]){
           i++;
       }
       else{
           cout<<"The missing number is "<<array[i]+1;
           break;
       }
   }
    return 0;
}