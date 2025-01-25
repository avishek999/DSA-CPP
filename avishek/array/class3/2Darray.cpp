#include<iostream>
using namespace std;

int main()
{
    
    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

   int col = 3;
   int row  = 3;

cout<<"Printing the column wise array"<<endl;
    for(int r = 0 ; r < row ; r++){
        for(int c = 0; c < col; c++){
            cout <<arr[r][c]<<" ";
        }  
        cout<<endl;

    }
        cout<<endl;
        cout<<"Printing the row wise array"<<endl;

    for(int c = 0 ; c < col; c++){
        for(int r = 0; r < row; r++){
            cout<< arr[r][c]<<" ";
        }   

        cout<<endl;

    }

        cout<<endl;
        cout<<"Printing the diagonal wise array"<<endl;

    for(int c = 0 ; c < col; c++){
        for(int r = 0; r < row; r++){

            if(r == c){
            cout<< arr[r][c]<<" ";
            }
        }   

        cout<<endl;

    }

    return 0;
}