#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binTOdec(int binary){
int dec=0;
int i =0;
while(binary !=0){
    int bit = binary%10;
    dec = bit*pow(2,i)+dec;
    binary= binary/10;
    i++;

}
return dec;
}
int decTObin(int dec){
int bin=0;
int i =0;
while(dec !=0){
    int bit = dec & 1;
    bin = bit*pow(10,i) + bin ; 
    dec= dec>>1;
    i++;
}
return bin;
}

int main(){
    int dec, binary;
    cin>>dec>>binary;
    int bin =decTObin(dec);
    int decimal = binTOdec( binary);
    

    cout<<bin<<endl<<decimal;
}