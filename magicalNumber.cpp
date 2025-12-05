#include<iostream>
#include<array>
using namespace std;
bool Divi(int n ){
    int digit=0;
    int count =0;
    while(n!=0){
        int dig= n%10;
        digit +=1;
        if(n%dig ==0){
            count += 1;
        }
        n =n /10;

    }
    if (count == digit){
        return true;
    }
    else{
    return false;}
}
bool repeated(int n){
    int count ;
    int arr[1000];
    int i =0;
    while(n!=0){
        int dig = n%10;
        count +=1;
arr[i]=dig;  
i++;
n = n/10;
}
int size = count;
    for(int i =0; i <size; i++ ){
        for(int j =0; j<size;j++){
            if (arr[i]==arr[j]&& i !=j){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n ;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    for(int i =1; i<=n ;i++){
        if (Divi(n)){
            if(repeated(n)){
                cout<<i<<endl;
            }
        }
    }
}