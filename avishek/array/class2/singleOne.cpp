#include <iostream>
using namespace std;


int singleOne(int arr[],int size){

 int store = 0;

  for(int i=0 ; i< size ; i++ ){
   store ^= arr[i];
  }
  return store;
}


int main() {
   int arr[] = {1,1,3,3,5,5,2};
   int size  = sizeof(arr) / sizeof(arr[0]);


   int value= singleOne(arr,size);

   cout<<value<<endl;
  return 0;
}