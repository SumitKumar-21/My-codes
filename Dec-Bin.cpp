#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n ;
    cout<<"Enter the decimal number :"<<endl;
    cin>>n;
    int x = n;
    n = n-x;
     int dec=0;
    int i =0;
    int bin1=0;

    while (n !=0){
 n = n*2;
 int y = n ;
 bin1= y*pow(10,i)+bin1;
 n = n -y;
 i++;
    }
    i =0;
       
    while(x!=0){
        int dig = x%2;
        dec = pow(10,i)*dig + dec;
        x = x/2;
        i++;
}
cout<<" The binary of the given number "<< n <<" is: "<<dec<<"."<<bin1;
return 0;
}