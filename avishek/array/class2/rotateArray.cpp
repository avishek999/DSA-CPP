#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void rotate(int arr[], int n, int d){

// if the size of array is bigger then the shift then we can use the modulo operator to get the final shift
  int finalShift = d % n;

// if the final shift is  0  then we dont need to do the operation we can just send the same array
 if(finalShift == 0){
    return;
 }

    // step1 : store the dth element in a temp array
    int temp[1000];
    int index  = 0;

    for(int i = n-finalShift ; i < n ; i++){
        temp[index] = arr[i];
        index++;
    }
 // step2 : shift the array to the left by finalshift elements
    for(int i = n-1; i >= 0; i--){
        arr[i] = arr[i-finalShift];
    }

// step3 : copy the temp array to the original array

    for(int i = 0; i < finalShift; i++){
        arr[i] = temp[i];
    }
}


int main()
{
   int arr[] = {1,2,3,4,5,6};
   int n = sizeof(arr)/sizeof(arr[0]);
   int d = 3;

  rotate(arr,n,d);
   for(int i=0; i<n; i++)
   {
    cout<<arr[i]<<" ";
   }

    return 0;
}











 // ==================================== LEETCODE PROBLEM ====================================

 class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int finalShift = k % n;
        if (finalShift == 0) return;

        vector<int> temp(finalShift);

        // Correctly store the last `finalShift` elements
        for (int i = 0; i < finalShift; i++) {
            temp[i] = nums[n - finalShift + i];
        }

        // Shift elements to the right without negative indexing
        for (int i = n - 1; i >= finalShift; i--) {
            nums[i] = nums[i - finalShift];
        }

        // Copy back stored elements
        for (int i = 0; i < finalShift; i++) {
            nums[i] = temp[i];
        }
    }
};