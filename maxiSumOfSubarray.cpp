#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int *arr= new int[n];
    cout<,"Enter the elements of the array"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];

    }
    int sum =0;
    int maxsum=INT_MIN;
    for(int i =0 ; i<n ; i++){
        for(int j  =i; j<n;j++){
            sum+=arr[j];
            if(sum>maxsum){
                maxsum=sum;
            }

        }
        sum=0;
    }
    cout<<"The maximum sum of the subarray is : "<<maxsum;
    return 0;
}