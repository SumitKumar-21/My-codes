/* Write a program to perform following matrix operations : (i) Addition (ii) Multiplication (iii)
Transpose (iv) Inverse (vi) Matrix to lower triangle and upper triangle form (vii) Tri-diagonal
elements (viii) Saddle point and also find how many saddle points in the given matrix(minimum
in row and maximum in column) */



#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int add(int arr[][], int brr[][], int i , int j,int m, int n){
    if(i==m && j ==n){
for(int k =0; k<i;k++){
    for(int l=0; l<j;l++){
      arr[i][j]=  arr[i][j]+brr[i][j];
    }
}
return arr;
}
else{
    cout<<"Not a valid operation"<<endl;
    return 0;
}
}
int sub(int arr[][], int brr[][], int i , int j,int m, int n){
    if(i==m && j ==n){
for(int k =0; k<i;k++){
    for(int l=0; l<j;l++){
      arr[i][j]=  arr[i][j]-brr[i][j];
    }
}
return arr;
}
else{
    cout<<"Not a valid operation"<<endl;
    return 0;
}
}
int transpose(int arr[][], int i , int j){
 int brr[j][i];
for(int k =0; k<i;k++){
    for(int l=0; l<j;l++){
      arr[j][i]=  arr[j][i];
    }
}
return arr;
}
else{
    cout<<"Not a valid operation"<<endl;
    return 0;
}


