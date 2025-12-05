#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the decimal number :"<<endl;
    cin>>n;
    string hex= "";
    char hexdigit[]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if ( n ==0){
        cout<<"The Hexadecimal is: 0"<<endl;
    }

    while(n!=0){
        int dig = n%16;
       hex = hexdigit[dig]+hex;
        n = n/16;
    
}
cout<<" The Hexadecimal is: "<<hex;
return 0;
}