// Decimal to binary

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int bin=0;
    int i =0;
    while(n!=0){
        int dig = n%10;
        bin = pow(2,i)*dig+bin;
        n =n/10;
        i++;
    }
    cout<<"The decimal of the binary number "<<n<<" is :"<<bin;
             }
