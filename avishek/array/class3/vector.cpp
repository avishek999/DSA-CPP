#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr;

    // vector<int> arr(10);
    vector<int> arr(10);


    for(int i=0; i<arr.size(); i++)
    {
     arr[i] = 1;
    }

 for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}