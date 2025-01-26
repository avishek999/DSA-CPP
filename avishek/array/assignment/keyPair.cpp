/*  Given an array arr[] of positive integers and another integer target. Determine if there exists two distinct 
indices such that the sum of there elements is equals to target. */




#include<iostream>
using namespace std;



void keyPair(int arr[] ,int size,int target){


 for(int i =0 ; i<size ; i++){
    for(int j =i+1 ; j<size;j++ ){
    if(arr[i] + arr[j] == target){

     cout<<arr[i] << arr[j];
     return ;
    }
   
   }
 }
cout << "not found";
}

int main()
{
 int arr[] = {1, 4, 45, 6, 10, 8};
 int size = 6;
 int target = 16;



keyPair(arr,size,target);




    return 0;
}