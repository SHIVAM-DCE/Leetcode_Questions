class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count1+=1;
            }
            if(count1>count2){
                count2=count1;
            }
            if(nums[i]==0){
                count1=0;
            }
        }
        return count2;
    }
};