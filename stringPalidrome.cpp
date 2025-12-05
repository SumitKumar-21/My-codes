#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string word;
cout<<"Enter the word"<<endl;
cin>>word;
string word2= word;
int i =0;
int j = word.size()-1;

while(i<j){
    swap(word[i],word[j]);
    i++;
    j--;
}
cout<<word<<endl;
cout<<endl;
if(word2==word){
    cout<<"The string is palidrome"<<endl;
}
else {
    cout<<"The string is not palidrome"<<endl;
}

}


