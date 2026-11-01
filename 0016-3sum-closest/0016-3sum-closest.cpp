class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int closestSum=nums[0]+nums[1]+nums[2];

        for(int i=0;i<n-2;i++){
            int s=i+1;
            int e=n-1;

            while(s<e){
                int currentSum = nums[i]+nums[s]+nums[e];

                if(currentSum==target){
                    return currentSum;
                }
                //agar closet mile to update krenge
                if(abs(target-currentSum)<abs(target-closestSum)){
                    closestSum=currentSum;
                }

                if(currentSum<target){
                    s++;
                }else{
                    e--;
                }
            }
        }
        return closestSum;
    }
};