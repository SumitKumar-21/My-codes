#include<iostream>
#include<vector>
using namespace std;
int Getpeakindex(vector<int> nums){
    int s=0;
    int n =nums.size();
    int e = nums.size()-1;
    int mid= s+(e-s)/2;
    while(s<=e && mid!=n-1 && mid!=0 ){
        if(nums[mid]>nums[mid-1]&& nums[mid]>nums[mid+1]){
            return mid;
        }
        if(nums[mid]>nums[mid-1]&&nums[mid]<nums[mid+1]){
            s= mid+1;
        }
        else{
            e = mid;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}

 int main(){
vector<int> nums ={18,29,38,59,98,100,99,98,90};

int index= Getpeakindex(nums);
if(index!=-1){
    cout<<"Peak Element exist and is :"<<index<<endl;
}
else{
    cout<<"Peak Element not found!!!"<<endl;
}

 }