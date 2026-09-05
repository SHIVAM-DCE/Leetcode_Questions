class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            elementSum+=nums[i];
            digitSum+=sum(nums[i]);
        }  
        return abs(elementSum-digitSum);      
    }
};