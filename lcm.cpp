#include<iostream>
#include<algorithm>
using namespace std;
int LCM(int n1 , int n2){
    int product = 1;
    for(int i =2; i<n1; i++){
        if (n1%i ==0 && n2%i==0){
            n1= n1/i; n2= n2/i;
            product *=i;
        }
    }
    product = product * n1*n2;
    return product;
}
int GCD(int n1, int n2){
    for(int i=n2; i>=1; i--){
        if(n1%i==0 && n2%i ==0){
            return i;
        }
    }
}
int fabonacci(int num){
   for(int i =1; i<=n; i++){
    int a =0;
    int b = 1;
    int nextnum= a+b;
}

}

int main(){
    int n1 , n2;
    cin>>n1;
    cin>>n2;
    int lcm =LCM(n1,n2); 
    int gcd = GCD(n1,n2);
    int nextnum=gcd;
    for(int i =gcd; i<=lcm; i++){
        if(nextnum%2!=0){
            cout<<nextnum;
        }
        nextnum=nextnum+i;
    }
}

