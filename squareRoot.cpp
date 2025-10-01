#include<iostream>
 using namespace std;
 int sqrt(int k){
    int start=0;
    int end=k;
   long long y =-1;
    long long int mid = start+ ((end-start)/2);
    while(start<=end){
        long long square = mid*mid;
    if (square == k){
        return mid;
    }
    else if (square < k){
        y = mid;
        start = mid +1;
    }
    else {
        end = mid-1;
    }
    mid = start+((end-start)/2);
 }
 return y;
}
  double precision(int x,int y,int n ){
      double ans= y;
    double factor=1;
    for(int i =1; i<=n;i++){
        factor = factor/10;
        for(double j =y;j*j<=x;j=j+factor){
            ans=j;
        }
    }
    return ans;
  }
    int main(){
     int x; 
    cout<<" Enter the number whose sqaure root you want to find"<<endl;
    cin>>x;
    double ans = sqrt(x);
    ans = precision(x,ans,4);
    cout<<"The square root of the number is :"<<ans;
   }