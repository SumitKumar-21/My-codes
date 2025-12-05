/*Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s.
  If more than one character occurs the maximum number of times then print the lexicographically smaller 
   character.
*/
#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int GetMaximumOccuringCharacter(string s){
    int arr[26]={0};
    for(int i =0;i<s.size();i++){
        char ch = s[i];
        int  number;
        if (ch>='a'&& ch<='z'){
         number= ch-'a';
        arr[number]++;
        }                       // Note: uppercase and lower case alphabet are assumed to be same
        else{
           number = ch -'A';
            s[number]++;
        }
    }
    int x =arr[0];
    int num=0;
for(int i =0;i<26;i++){
 if (arr[i]>x){
    num = i;
    x= arr[i];
 }
}
char answer= num+'a';
return answer;
}
int main(){
    string s;
    cin>>s;
  char finalanswer= GetMaximumOccuringCharacter(s);
  cout<<finalanswer;

}