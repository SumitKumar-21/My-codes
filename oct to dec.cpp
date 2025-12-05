// octal to decimal

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the octal number :"<<endl;
    cin>>n;
    int dec=0;
    int i =0;
    while(n!=0){
        int dig = n%10;
        dec = pow(8,i)*dig + dec;
        n = n/10;
        i++;
}
cout<<" The decimal of the given number "<< n <<" is: "<<dec;
return 0;
}