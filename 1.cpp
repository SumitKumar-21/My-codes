/*
Star Pattern
*
**
***
**
*  

*/




#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long fact(int n ){
    long long fac =1;
    while(n!=1){
 fac = fac*n;
        n = n-1;
    }
    return fac;
}
int main() {
   int n ;
    cin>>n;
    if ( n ==0 ){
        cout<<"0";
    }
    long long ans= (fact(n)/fact(n/2))/2;
    ans = ans /fact(n/2);
    cout<<ans;    
    return 0;
}

// int main (){
//     int t ;
//     cin>>t;
//     int n ;
//     cin>>n;
//     if(n%2 == 1){
//        for ( int i =1; i<= (n/2)+1; i++){
// for ( int j =1; j<=i; j++){
//     cout<<"*";
// }
// cout<<endl;
//        }

//  for ( int i =(n/2)+2; i<= n; i++){
// for ( int j =n+1-i; j>=1; j--){
//     cout<<"*";
// }
// cout<<endl;
//  }
// }


//  if(n%2 == 0){
//        for ( int i =1; i<= (n/2); i++){
// for ( int j =1; j<=i; j++){
//     cout<<"*";
// }
// cout<<endl;

//        }
//  for ( int i =(n/2)+1; i<= n; i++){
// for ( int j =n+1-i; j>=1; j--){
//     cout<<"*";
// }
// cout<<endl;
//  }
//     }
// }



// int main(){
// int m , p;
// cin>>m>>p;
// cout<<"IS m ==p :"<<(m==p)<<endl;
// cout<<"IS m >p :"<<(m>p)<<endl;
// }

// int main (){
//     int n ;
//     cin>>n;
//     int j =1;
//     for(int i =1; i<=n; i++){

//         if (i>1){
//               j = n *(i-1)+1;
//         }
//         for( ; j<=n*i ; j++){
//             cout<<j<<" "; 
//         }
//         cout<<endl;
        
//     }
    
// }
// while (x != (n*(n+1))/2 -n +1){
//     for(int i =1; i<=n;i++){
// for (int j =1; j<=i; j++){
//     cout<<x<<" ";
//     x++ ;
// }
// x =
// cout<<endl;
//     }
// }
// }


//  for(int i =1; i<=n;i++){
// for (int j =i; j>=1; j--){
//     cout<<j<<" ";
// }
// cout<<endl;
//     }
// }

/*

D 
C D
B C D
A B C D

*/

// #include<iostream>
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int n ;
//     cin>>n;
//  char  ch = 'A' + n-1;
// // int x =1;
//   for(int i =1; i<=n;i++){
// for (int j =1; j<=i; j++){
//     cout<<ch<<" ";
//       ch +=1;
//     // x +=1; 
// }
//   ch = 'A'+n-1;
//   ch = ch -i;
// // x = x-1;
// cout<<endl;
   
//     }
//     return 0;





/*
       1
      121
     12321
    1234321
   123454321
  12345654321
 1234567654321
123456787654321 */

// #include<iostream>
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int n ;
//     cin>>n;
// int x =1;
// for(int i =1; i<=n;i++){
//     for(int j =1; j<= n-i; j++){
//         cout<<" ";
//     }
//     int m =1;
//      for(int k =1;k<=(2*i-1); k++){
        
//         if (k>i){
//             x =i;
//             x=x-m;
//             m +=1;
//         cout<<x;}
//         else{
//             cout<<x;
//             x++;
//         }
        
//     }
//     x =1;
//     cout<<endl;
// }
// }
// Complement of the number 

#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int complement_of_Number(int n){
    if (n==0){
        return 1;
    }
    int a =~n;
    int mask=0;
    int digit=0;
    while(n!=0){
     digit+=1;
     n= n>>1;
    }
    for(int i =1; i <=n; i++){
        mask = (mask<<1)  | 1;
    }
    int result = a & mask;
return result;
}
int main(){
    int n ;
    cin>>n;
    int ans =complement_of_Number(n);
    cout<<ans<<endl;
}
