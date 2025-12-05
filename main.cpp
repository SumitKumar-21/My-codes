#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int fs=0;
    int ls=0;
    for(int j=0;j<name.size();j++){
        if(j==name.size()-1 ||name[j]==' '){
            ls=j-1;
            while(fs<ls){
                swap(name[fs],name[ls]);
                fs++;
                ls--;
            }
            fs=j+1;
        }
    }
    cout<<name;
    return 0;
}