#include<iostream>
#include<cmath>
#include<string>
using namespace std; 
bool IsLeapYear(int year){
    if (year%400 ==0){
        return true;
    }
    else if(year%4==0 && year%100 != 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d1,m1,y1,d2,m2,y2;
    // string Date1;
    // string Date2;
    // cout<<"Entre the first Date in YYYY-MM-DD format :"<<endl;
    // cin>>Date1;
    // cout<<"Entre the second Date in YYYY-MM-DD format :"<<endl;
    // cin>>Date2;
 cout<<"Entre the first Date in YYYY MM DD format :"<<endl;
    cin>>y1>>m1>>d1;
     cout<<"Entre the second Date in YYYY MM DD format :"<<endl;
    cin>>y2>>m2>>d2;
    int days;
  if (IsLeapYear(abs(y1-y2)))
}
