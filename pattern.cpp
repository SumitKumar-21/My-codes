/*
        * 
      * A * 
    * A * A * 
  * A * A * A * 
* A * A * A * A * 

*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ; 
    cin>>n;
  for(int i =0;i<=n-1 ; i++){
    for(int j =1; j<=n-1-i; j++){
        cout<<" ";
    }
    for(int j =1; j<=i+1; j++){
        if(j == i+1){
            cout<<"*";
        }
        else{
            cout<<"*A";
        }
    }
    cout<<endl;
  }
  
}