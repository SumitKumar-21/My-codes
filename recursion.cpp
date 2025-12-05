 #include<iostream>
#include<climits>
#include<algorithm>
using namespace std;


    double myPow(double x, int n) {
        cout<<"n="<<n<<endl;
        if(n==0){
            return 1;
        }
        if (n==1){
            return x;
        }
        if(n<0){
            cout<<1/(x*myPow(x,n+1))<<endl;
            double ans = 1/(x*myPow(x,n+1));
            return 1/(x*myPow(x,n+1));

        }
        else{
            cout<<x*myPow(x,n-1)<<endl;
        return x*myPow(x,n-1);}
    }

int main(){
int n , x;
cin>>n>>x;
double ans= myPow(x,n);
cout<<ans<<endl;
}