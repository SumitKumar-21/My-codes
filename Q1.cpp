#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of peoples"<<endl;
    cin>>n;
    if (n ==0 ){
            cout<<"Director=0  ";
    }

   if(n >0){
    cout<<" Director=1  ";}
      n =n-1;
    int dean=0;
    int  faculty=0;
    int  student =0;
    int i =1;
    while (n >0){
        dean+=1;
        n=n-1;
        while(n>0 && faculty!=5*i){
            faculty+=1;
            n= n-1;
        }
      
        while (n >0 && student!=i*100){
            student +=1;
            n= n-1;
        }
       i++;
    }
    cout<<"Dean="<<dean<<"  Faculty="<<faculty<<"  Students="<<student<<endl;

}
