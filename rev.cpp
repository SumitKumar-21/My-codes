#include <bits/stdc++.h> 
using namespace std;
void reverse(int st, int e,string s){
    while(st<=e){
        swap(s[st],s[e]);
        st++;
        e--;
    }     
}
string reverseWord(string s){
    int st =0;
    int e=0;
    for(int i =0; i<s.length();i++){
  if (s[i]!= ' '){
  e =i;
  }
  else{
    int x =e;
    reverse(st,e,s);
    st = x+2;
  }
}
return s;
    }
int main(){
    string s;
    getline(cin,s);
    string copy =  reverseWord(s);
    cout<<copy<<endl;
   
}