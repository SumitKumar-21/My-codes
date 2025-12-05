/*  Write a function countday() to find out the number of days between two given dates.*/

#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool IsleapYear(int year){
    if(year%400==0){
        return true;
    }
    else if ( year%4==0  && year%100 !=0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int month[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"Enter the first date in format YYYY MM DD "<<endl;  //date1> date 2
int year1;
int month1;
int day1;
int year2;
int month2;
int day2;
cin>>year1;
cin>>month1;
cin>>day1;

cout<<"Enter the second date in format YYYY MM DD "<<endl;
    cin>>year2;
    cin>>month2;
    cin>>day2;
    int days=day1;
    for(int i =0;i<month1-1;i++ ){
        days = days+month[i];
    }
    cout<<days<<endl;
    year1= year1-1;
    days= month[month2-1]-day2+days;
  for(int i = month2; i<=11;i++){
    days = days +month[i];
  }
  cout<<days<<endl;
  year2= year2+1;
for(int i = year2; i<=year1 ;i++){
    if(IsleapYear(i)){
        days = days+366;
    }
    else{
        days = days +365;
    }
}
cout<<days;
}