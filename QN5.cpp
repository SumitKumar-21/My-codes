// /*  Read the date of the birth(date,month,year)of the person from the keyboard . write a program to calculate one's age as on date 
// 30-10-2025 an display the output in terms of years , months and days . Your program must take care of leap years
// and months per day and all the details exactly (NO assumption).  
// */

// #include<iostream>
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool IsleapYear(int year){
//     if(year%400==0){
//         return true;
//     }
//     else if ( year%4==0  && year%100 !=0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};

//     int year, days, mon;
//     cout<<"Enter the birth year:"<<endl;
//     cin>>year;
//       cout<<"Enter the birth month:"<<endl;
//     cin>>mon;
//       cout<<"Enter the birth day:"<<endl;
//     cin>>day;
//     int days= day;
//     if(IsleapYear(year)){
//  months[1]=29;
//     }
//     for(int i = mon-1; i<12; i++){
//         days=days+months[i];
//     }
//     year=year+1;
//     int age = 2025-year;

// for(int i = year ; i<= 2025; i++){
//   if(IsleapYear(year)){
//      days+=366;
//     }
//     else{
//         days+=365;
//     }
// }


// }


// Next Greatest element 
 
#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
