class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    //galat ahi hash map ka use hoga
    //     sort(nums.begin(),nums.end());
    //     int start=0;
    //     int end=nums.size()-1;
    //      while(start<end){
    //         int sum=nums[start]+nums[end];
    //         if(sum==target){
    //             vector<int>ans={start,end};
    //             return ans;
    //         }
    //         else if(sum<target){
    //             start++;
    //         }
    //         else{
    //             end--;
    //         }
    //      }
       

    //    return {};


        //brute force
        int i=0;
        int j=1;
        int arr[5];
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vector<int> ans={i,j};
                    return ans;
                }
            }
        }
        vector<int>error={404};
        return error;
    }
    
};