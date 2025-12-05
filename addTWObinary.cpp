#include<iostream>
#include<string>

using namespace std;
// class Solution {
// public:
    string addBinary(string a, string b) {
int carry=0;
int n = a.size();
int m =b.size();
// int maxsize=n ;
int k =n-1;
int l =m-1;
int i=0;
string add;
while(k>=0 || l>=0 || carry){
    int x =0, y=0;
    if(i<n && i<m){
        x = a[k]-'0';
        y= b[l];
        k--;
        l--;
        i++;
    }
    if(i<n){
        x=a[k]-'0';
        k--;
        i++;
    }
    else{
        y=b[l]-'0';
        l--;
        i++;
    }
    if(x==1 && y==1 && carry ==0){
        carry=1;
        add.insert(0,"0");
    }
    if(x==1 && y==1 && carry ==1){
        carry=1;
         add.insert(0,"1");
    }
    if((x==0 && y==1)||(x==1&&y==0) && carry ==0){
        carry=0;
        add.insert(0,"1");
    }
 if((x==0 && y==1)||(x==1&&y==0) && carry ==1){
        carry=1;
        add.insert(0,"0");
    }
    if(x==0 &&y==0 && carry==1){
         add.insert(0,"1");
    }

    }
    return add;
    }
// };

int main(){
string a;
string b;
cin>>a;
cin>>b;
string ans =addBinary(a,b);
cout<<ans;
return 0;

}