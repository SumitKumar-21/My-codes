


#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}
long long C(int i, int j) {
    if (j > i) return 0;  // Invalid case
    return factorial(i) / (factorial(j) * factorial(i - j));
}


int main(){
    int n ; 
    cin>>n;
  for(int i =1;i<=n ; i++){
    for(int j =1; j<=n-i; j++){
        cout<<" ";
    }
    for(int j =0; j<=i-1; j++){
        int x = C(i-1,j);
        cout<<x<<" ";
    }
    cout<<endl;
  }
  
}