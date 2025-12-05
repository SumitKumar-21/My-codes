#include<iostream>
#include<vector>
using namespace std;
// void bubbleSorting(int arr[],int n){
//     for(int i =0; i<n-1;i++){
// for(int j=0;j<=n-1-i;j++){
// if(arr[j]>arr[j+1]){
//   swap(arr[j],arr[j+1]);
// }
// } 

// }
// }

void insertionSorting(int arr[],int n){
    for(int i =1; i<=n-1;i++){
        int x = arr[i];
        int j=i-1;
for(;j>=0;j--){
if(arr[j]>x){
 arr[j+1]=arr[j];
}
else{
    break;
}
} 
arr[j+1]=x;
}
}
int main(){
    int arr[5]= {90,-45,-7,78,4};
   insertionSorting(arr,5) ;
   for(int i =0; i<5; i++){
    cout<<arr[i]<<endl;
   }
}