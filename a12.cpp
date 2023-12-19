#include<iostream>
using namespace std;
int main(){
    int array[6]={1,1,1,0,1,1};
    int i=0;
    int count=0;
    int temp=0;
  while(i<6){
      if(array[i]==1){
          count++;
          i++;
      }
      else{
          i++;
          temp=max(temp,count);
            count=0; 
      }
  }
  int maxvalue=max(temp,count);
  cout<<"Maximum number of one's is: "<<maxvalue;
  
    return 0;
}

