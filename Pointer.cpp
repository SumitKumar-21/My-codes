#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int arr[22]={1 ,23,34,54,3,2};
char ch[20]="Hello";
char dh[6]="world";
cout<<ch[3]<<endl<<ch<<endl;
cout<<ch[5]<<endl;
char bh[7];
string s="Sumit Kumar Sah";
// cout<<strlen(ch)<<endl;
// cout<<s.length()<<endl;
// cout<<s<<endl;
// Important Functions of the Character Array
cout<<strlen(ch)<<" "<<strlen(dh)<<endl;
strcpy(bh,dh);
cout<<bh<<endl;
strcat(ch,dh);
cout<<ch<<endl;
// cout<<strchr(ch,'y')<<endl;
// cout<<strstr(ch,"x")<<endl;
// cout<<strcmp(ch,dh)<<endl;
cout<<s.empty()<<endl;
cout<<s.front()<<endl;
cout<<s.back()<<endl;
s.clear();
cout<<s<<endl;
s.push_back('K');
cout<<s<<endl;\
s.pop_back();
cout<<s<<endl;
s+="Sk";
s += " My "; 
s.append("world");
cout<<s<<endl;
s.insert(2,"'s");
cout<<s<<endl;
s.erase(5,2);
cout<<s<<endl;
s.replace(7,2,"empire");
cout<<s<<endl;
string t = s.substr(3,4);
cout<<t<<endl;
s.swap(t);
cout<<"String s: "<<s<<endl;
cout<<"String t: "<<t<<endl;
}