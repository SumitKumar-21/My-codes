class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();
        arr.push_back(nums[0]);
        for(int i =1;i<n;i++){
            for(int j =i-1;j>=0;j--){
            if ( nums[i]==arr[j]  ){
                continue;
            }
            else{
                arr.push_back(nums[i]);
            }
            }
            
        }
        return arr.size();
    }
};