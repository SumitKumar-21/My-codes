//decimal to octal

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the decimal number :"<<endl;
    cin>>n;
    int oct=0;
    int i =0;
    while(n!=0){
        int dig = n%8;
        oct = pow(10,i)*dig + oct;
        n = n/8;
        i++;
}
cout<<" The octal of the given number "<< n <<" is: "<<oct;
return 0;
}