// #include<iostream>
// using namespace std;

// int countone(int n){
//     int one=0;
//     while(n!=0){
//         int x = n%10;
//         if(x ==1){
//             one++;
//         }
//         n = n/10;
//     }
//     return one;

// }
// int main(){
//     int n ;
//     cout<<"Enter the number:"<<endl;
//     cin>>n;
//     int ans=0;
//     for(int i =1; i<=n ;i++){
//      ans = countone(i)+ans;
//     }
//     cout<<ans;
// }

 #include<iostream>
 #include<climits>
 using namespace std;
int nthMagicalNumber(int n, int a, int b) {
        long long x =0;
           
                  
            for(long long i =1; ;i++){
                if(i%a==0 || i%b==0){
                    x = i;
                    n = n-1;
                }
                if( n ==0){
                    break;
                }
            }
        
        return x;
    }
int main(){
    int n ,a,b;
    cin>>n>>a>>b;
    int ans = nthMagicalNumber(n,a,b);
    cout<<ans;
}