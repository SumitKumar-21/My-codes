// BEll NUMBER

#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
cout<<"Enter the number of rows you want to print:"<<endl;
cin>>n;
int arr[n][n];
int first=1;
arr[0][0]=1;
for(int i =1; i < n; i++){
    for(int j =0; j<i+1; j++){
        if (j ==0){
            arr[i][j]=first;
        }
        else {
        arr[i][j]=arr[i][j-1]+arr[i-1][j-1];}
    }
    first=arr[i][i];
}
for(int i =0; i<n;i++){
     cout<<"Row "<<i<<": ";
    for(int j=0 ; j<i+1; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"-->Bell("<<i+1<<")="<<arr[i][i]<<endl;
}
}