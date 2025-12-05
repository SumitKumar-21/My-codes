
#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int n ; 
    cin>>n;
    int x = n-1;
    int dean =0, student=0, faculty =0, director=1;
  for(int i =0 ; x>0; i ++){
    dean +=1;
    x= x-1;
    for(int i =1; i<=5 && x >0 ; i++){
        faculty +=1;
         x= x-1;
         for(int i =1; i<= 20 && x >0; i++){
            student +=1;
            x= x-1;
         }
    }
  }
  cout<<director<<endl;
    cout<<dean<<endl;
      cout<<faculty<<endl;
  cout<<student<<endl;
}