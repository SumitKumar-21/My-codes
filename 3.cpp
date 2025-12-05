// REVERSING THE STRING

#include<iostream>
using namespace std;
int length(char name[]){
    int count=0;
    int i =0;
    while(name[i]!= '\0'){
   count +=1;
     i++ ;
    }
    return count;
}
int main(){
      char name[100];
      cout<<"Enter you name: "<<endl;
      cin>>name[];
      int x = length(name[]);
      cout<<x;

}