#include<iostream>
#include<cmath>
using namespace std;  
// i == row and j == column
int main(){ 
    int arr[5][4]= {{1, 11, 111, 1111}, {2,22,222,2222},{3,33,333,3333},{4,44,444,4444},{5,55,555,5555}};
      cout<<"Entre the elements of the matrix:"<<endl;
    //   for(int i=0; i<5;i++){
    //     for(int j =0 ; j<4; j++){
    //         cin>> arr[i][j];
    //     }
    //   }

    //  for(int j=0; j<4;j++){
    //     for(int i =0 ; i<5; i++){
    //         cin>> arr[i][j];
    //     }
    //   }

      for(int i=0; i<5;i++){
        for(int j =0 ; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
}