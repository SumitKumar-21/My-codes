/*  Given a positive integer n . Find the digit of teh numbe n with highest frequency . If there is more then 
one digit with the highest frequency , print all such digits 
*/
#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[10]={0};
    while(n !=0){
        int dig=n%10;
        arr[dig]++;
        n = n/10;
    }
    int x =-1;
    for(int i =0; i<10; i++){
        if ( arr[i]>x){
            x = arr[i];

        }
    }
    for(int i =0; i<10; i++){
        if (arr[i]==x){
            cout<<i<<" ";
        }
    }
}
