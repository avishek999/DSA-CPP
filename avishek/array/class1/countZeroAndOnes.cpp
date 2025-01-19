#include <iostream>
using namespace std;


void count(int arr[],int size){

  int one = 0;
  int zero =0;
  
  for(int i =0 ; i< size ;i++){
    if(arr[i] == 1){
      one++;
    }
    else if(arr[i] == 0){
      zero++;
    }
  }

  cout<<"zero: "<<zero<<endl;
  cout<<"one: "<<one;

}


int main() {
  
  int arr[] = {0,0,0,1,2,2,1,2,2};
  int size = sizeof(arr) / sizeof(arr[0]);

 count(arr,size);

  return 0;
}