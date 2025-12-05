/*
Write a program to read the content from a text file IN.TXT, count the number of alphabets, digits
and special characters present in it and write these information into a text file OUT.TXT.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
// int main(){
//     string input;
//     cout<<"Enter the sentence you wnat to store in the txt file"<<endl;
//     getline(cin,input);
// ofstream inputfile("IN.TXT"); // object and the file created
// inputfile<<input;
// inputfile.close();
// // fstream add("IN.txt",ios::app);
// // add<<"I am understanding I/O file handling\n";
// // add.close();
// int alphabets=0;
// int digits=0;
// int sp=0;
// ifstream outfile("IN.txt");
// char ch;
// while(outfile.get(ch)){
//     if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')){
//         alphabets++;
//     }
//     else if(ch>='0'&& ch<='9'){
//         digits++;
//     }
//     else {
// sp++;
//     }
// }
// outfile.close();

// ofstream output("out.txt");
// output<<"Number of alphabets in the Input file is:"<<alphabets<<"\n";
// output<<"NUmber of digits int he input file is :"<<digits<<"\n";
// output<<"Number of special character in the input file is :"<<sp<<"\n";
// output.close();
// ifstream readoutput("out.txt");
//     string line ;
//     while(getline(readoutput,line)){
//         cout<<line<<endl;
//     }
// readoutput.close();

// cout<<"Successfully DONE"<<endl;

// }

/*
. Write a program that reads a text file and creates another file that is identical except that every
sequence of consecutive blank spaces is replaced by a single space.
*/

// int main(){
// if(remove("IN.txt")==0){
//     cout<<"above file deleted successfully"<<endl;
// }
// else{
//     cout<<"file not found"<<endl;
// }
//     string input;
//     cout<<"Enter the input string :"<<endl;
//     getline(cin,input);
//     ofstream file1("file1.txt");
//     file1<<input<<"\n";
//     file1.close();
//     ofstream file2("file2.txt");
//     ifstream file1reading("file1.txt");
//     string word;
//     while(file1reading>>word){
//         file2<<word<<" ";
//     }
//     file1reading.close();
//     file2.close();

    
// }



/* 
. Two files FILE1 and FILE2 contain sorted lists of integers. Write a program to produce a third file
DATA which holds a single sorted, merged list of these two lists. 
*/
// void bubblesort(int arr[], int n){
//     for(int i =0; i<=n-1; i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     string s1,s2;
//     cout<<"Enter the sorted integer that you want to store in File1"<<endl;
//     cin>>s1;
//     cout<<"Enter the sorted integer that you want to store in the File2"<<endl;
//     cin>>s2;
//     int n1= s1.length();
//     int n2=s2.length();
// ofstream file1("file1.txt");
// file1<<s1;
// file1.close();
// ofstream file2("file2.txt");
// file2<<s2;
// file2.close();
// int n = n1+n2;
// int arr[n];
// for(int i =0;i<n;i++ ){
//     if(i<n1){
//             arr[i]=s1[i]-'0';
//         }
//         else{
//             arr[i]=s2[i-n1]-'0';
//         }
// }
// bubblesort(arr,n);
// ofstream file3("file3.txt");
//  file3<<"The sorted integers are: \n";
// for(int i =0;i<n;i++){
// file3<<arr[i]<<" ";
// }
// file3.close();
// remove("file1.txt");
// remove("file2.txt");
// }



