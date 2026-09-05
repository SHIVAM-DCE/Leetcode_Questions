class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(i!=nums[i]) return i;
        // }
        // return nums.size();

        int total=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        return (n*(n+1)/2)-total;
    }
};