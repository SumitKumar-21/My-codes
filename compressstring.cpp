#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int numberofdigit(int n){
    int count =0;
    while(n!=0){
        count +=1;
        n =n /10;
    }
    return count;
}
int compress(vector<char>& chars) {
    int arr[26]={0};
string s;
int count =0;
for(int i =0; i<chars.size();i++){
    char ch = chars[i];
    if (chars[i]==ch){
count +=1;
    }
    else{
        s.push_back(ch);
        s.push_back(count);
        count =0;
    }
}

}