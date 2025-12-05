#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string word1;
cout<<"Enter the word"<<endl;
cin>>word1;
string word2;
word2[0]= word1[0];
int count =0;
for(int i =1; i<word1.size();i++){
    for(int j  =0; j<word2.size();j++){
        if(word1[i]==word2[j]){
            count+=1;
        }
    }
    if(count==0){
        word2.push_back(word1[i]);
    }
    count =0;
}
cout<<word2;
    
}