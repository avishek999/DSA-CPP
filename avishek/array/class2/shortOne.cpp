#include <iostream>
using namespace std;



void shortZeroOne(int arr[],int size){

  int zero =0;
  int one =0;

  for(int i=0;i<size;i++){
  if(arr[i] == 0){
    zero++;
  }
 else if(arr[i] == 1){
    one++;
  }
  }

  int i=0;

  for(;i<zero;i++){
    arr[i] = 0;
  }
  for(;i<size;i++){
    arr[i] = 1;
  }
}


int main() {
  int arr[] = {0,1,1,1,0,0,0};
  int size = 7;

  shortZeroOne(arr,size);

  for(int i=0;i<size;i++){
    cout<<arr[i];
  }
  return 0;
}