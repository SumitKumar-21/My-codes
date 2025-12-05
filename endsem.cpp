#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int BS(int arr[],int size,int key){
int s =0;
int e = size-1;
int mid= s+(e-s)/2 ;
while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        s=mid+1;
    }
    else{
        e = mid-1;
    }
    mid = s+(e-s)/2 ;
}
}
// void sort(float arr[], int size){
//     for(int i =1;i<size;i++){
//         for(int j =0; j<size-i;j++){
//             if(arr[j]>arr[j+1]){
// swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
 void sort(employee HR.employees[],int size){
    for(int i =1;i<size;i++){
        for(int j =0; j<size-i;j++){
            if(employees[j].salary>employess[j+1].salary){
swap(employees[j],employees[j+1]);
            }
        }
    }
}
struct date{
int day;
int month;
int year;
};
struct employee{
int empID;
string name;
date joiningdate;
float salary;
};
struct department{
    string depName;
    employee* employees;
    int empcount;
    void display(int j){
         cout<<"Name: "<<employees[j].name<<endl;
            cout<<"Deparatment Name: "<<depName<<endl;
            cout<<"Employee ID: "<<employees[j].empID<<endl;
            cout<<"Joining Date: "<<employees[j].joiningdate.year<<" "<<employees[j].joiningdate.month<<" "<<employees[j].joiningdate.day<<endl;
             cout<<"Salary: "<<employees[j].salary<<endl;
    }
};
int main(){
    //-------------------------------------HR Department------------------------------------------
    department HR;
    cout<<"Enter the number of the employees in HR depertment :"<<endl;
    cin>>HR.empcount;
   HR.employees = new employee[HR.empcount];
   cout<<"-------------Enter The Details Of THe Employees OF HR Department-----------------"<<endl;
   for(int i =0 ; i<HR.empcount;i++){
    HR.depName="HR department";
    cout<<"---- Details Of Employee ---- "<<(i+1)<<endl;
    cout<<"Enter the Name: ";
    cin.ignore();
     getline(cin,HR.employees[i].name);
     cout<<"Enter the Employee ID Number: ";
      cin>>HR.employees[i].empID;
      cout<<"Enter the Employees Joining Date"<<endl;
      cout<<"Year: ";
       cin>>HR.employees[i].joiningdate.year;
        cout<<"Month: ";
       cin>>HR.employees[i].joiningdate.month;
        cout<<"day: ";
       cin>>HR.employees[i].joiningdate.day;
       cout<<"Enter the Salary of the Employee: "<<endl;
       cin>>HR.employees[i].salary;
   }
   //--------------------------------Research Department------------------------------------------
 department R;
 cout<<endl;
 cout<<endl;
    cout<<"Enter the number of the employees in research depertment :"<<endl;
    cin>>R.empcount;
   R.employees = new employee[R.empcount];
   cout<<"-------------Enter The Details Of THe Employees OF Research Department-----------------"<<endl;
   for(int i =0 ; i<R.empcount;i++){
    R.depName="HR department";
    cout<<"---- Details Of Employee"<<(i+1)<<" ---- "<<endl;
    cout<<"Enter the Name: ";
    cin.ignore();
     getline(cin,R.employees[i].name);
     cout<<"Enter the Employee ID Number: ";
      cin>>R.employees[i].empID;
      cout<<"Enter the Employees Joining Date: "<<endl;
      cout<<"Year: ";
       cin>>R.employees[i].joiningdate.year;
        cout<<"Month: ";
       cin>>R.employees[i].joiningdate.month;
        cout<<"day: ";
       cin>>R.employees[i].joiningdate.day;
       cout<<"Enter the Salary of the Employee: "<<endl;
       cin>>R.employees[i].salary;
   }
delete [] R.employees;






   // Sorting Based on salary ---------------------
float salary[HR.empcount];
int empid[HR.empcount];
for(int i =0; i<HR.empcount;i++){
    empid[i]=HR.employees[i].empID;
    salary[i]=HR.employees[i].salary;
}
// sorted salary
//print the details based on salary
// //  //  sort(salary, HR.empcount);
sort(employees,HR.empcount);
cout<<"------Sorted based on salary------- "<<endl;
// for(int i =0; i<HR.empcount; i++){
//     float x = salary[i];
//     for(int j =0; j<HR.empcount;j++){
//         if(x==HR.employees[j].salary){
//             HR.display(j);
                       
//         }
//     }
// }
 for(int j =0; j<HR.empcount;j++){
            HR.display(j);
                       
        }



delete []HR.employees;




}




// void deletech(string& s, int index){
// s[index]='\0';
// }
// int getmaxlenghtword(string s){
//     int len=0;
//     int maxlen=0;
//     for(int i =0; i<s.length();i++){
//         if(s[i]==' '){
//             if(len>maxlen){
//                 maxlen=len;
//             }
//             len=0;
//         }
//         else{
//             len++;
//         }
//     }
//     if(len>maxlen){
//         maxlen=len;
//     }
//     return maxlen;
// }
// void standardizeThesentence(string& s){
//     for(int i =0; i<s.length();i++){
//         if(i==0){
//            if(s[i]>='A'&& s[i]<='Z'){
//             continue;
//         }
//         else if(s[i]>='a'&& s[i]<='z'){
//         s[i]=s[i]-'a'+'A';}
//     }
//     if(i==s.length()-1){
// if(s[i]>='A'&& s[i]<='Z'){
//             s[i]=s[i]-'A'+'a';
//         }
//         else if(s[i]>='a'&& s[i]<='z'){
//         continue;
//     }

//     } 
        
//     if(s[i-1]==' '&& s[i]!=' '){
//         if(s[i]>='A'&& s[i]<='Z'){
//             continue;
//         }
//         else if(s[i]>='a'&& s[i]<='z'){
//         s[i]=s[i]-'a'+'A';}
//     }
//     else if (s[i]!=' '){
// if(s[i]>='A'&& s[i]<='Z'){
//             s[i]=s[i]-'A'+'a';
//         }
//         else if(s[i]>='a'&& s[i]<='z'){
//         continue;
//     }
//     }
//     }
// }

// void removesubstring(string& copys, string subs){
//     int n1= copys.length();
//     int n2= subs.length();
//     char ch = subs[0];
//     for(int i=0; i<copys.length();i++){
//         // if first character is found  search the rest part of the substring 
//         if(ch==copys[i] && (n1-i+1)>=(n2-1)){
//             int check=0;
//   for(int j =1; j<n2;j++){
//     if(subs[j]!=copys[i+j]){
//         check=-1;
//         break;
//     }
//   }
//    // if the above case is passed means we got the substring at the index of i
//     // now we need to remove that
//     if(check==0){
//     for(int k =i;k<i+n2;k++){
//       copys[k]='\0';
//     } 
//       i--;
// }

//         }
//     }
// }
//  int main(){
//     string s, subs, s2;
//     cout<<"Enter the Main string: ";
//     getline(cin,s);
//     cout<<"Enter the substring to be removed: ";
//     getline(cin,subs);
//     cout<<"Enter the string to be concatenated with main string: ";
//     getline(cin,s2);
//     string copys=s;
//     int countvowels=0;
//     for(int i =0; i<s.length();i++){
//         if(s[i]=='.'||s[i]==','||s[i]=='!'||s[i]==';'||s[i]==':'||s[i]=='?'){  // Cannot remove the space between the characters that are to be removed
//             deletech(s,i);
//         }
//         if(s[i]==' '&& (i+1)<=s.length() && (s[i+1]==' '||s[i+1]=='.'||s[i+1]==','||s[i+1]=='!'||s[i+1]==';'||s[i+1]==':'||s[i+1]=='?')){
//            deletech(s,i);
//         }
//         if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
//             countvowels++;
//         }
//     }
    
//     int countword=0;  // number of word = number of space+1 in cleaned sentence
//     int maxlength= getmaxlenghtword(s);

//     for(int i=0;i<s.length();i++){
//         if(s[i]==' '){
//            countword++;
//         }
        
//     }
//     cout<<"1. "<<s<<endl;
//    standardizeThesentence(s);
//    cout<<"2. "<<s<<endl;
//     cout<<"3. Number of words in cleaned sentence is: "<<countword+1<<endl<<"   Number of vowels in cleaned sentence is: "<<countvowels<<endl;
//     cout<<"the max length of the word is :"<<maxlength-3<<endl;
//     removesubstring(copys,subs);
//     cout<<"4. "<<copys<<endl;
//     cout<<"5. "<<s+s2<<endl;
//  }

