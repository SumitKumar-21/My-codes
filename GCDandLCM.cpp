#include<iostream>
#include<string>
using namespace std;
int gcd(int a , int b){  //  Note : a>b
    // if(b==0){
    //     return a;
    // }
    // else{
    //     return gcd(b,a%b);
    // }
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a-b);
    }
}
int main(){
int a,b;
cin>>a>>b;
int ans = gcd(a,b);
cout<<ans;
cout<<"LCM(a,b)="<<a*b/ans;

}