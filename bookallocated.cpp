#include<iostream>
using namespace std;
bool isPosssiible(vector<int> arr,int n,int m,int mid){
     int studentcount=1;   // REMBEMBER HOW PARTITION IS DONE
     int pagesum=0;
     for(int i =0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pagesum= arr[i];
        }
     }
return true;

}
int bookAlloat(vector<int> arr, int n, int m){
    int s =0;
    int sum=0;
    int ans=-1;
    for(int i =1;i<=n;i++){
        sum+=arr[i];
    }
    int e= sum;
     int mid= s+ (e-s)/2;
     while(s<=e){
        if(ifPossible(arr,n,m,mid)){
      ans= mid;
      e=mid-1;
        }
        else{
            s=mid+1;
        }
     }
     return ans;
}


int main{
    vector<int> arr[5] ={1,34,67,22,21};
     int ans = bookAllocat(arr,5,2);
     cout<<ans;
}
