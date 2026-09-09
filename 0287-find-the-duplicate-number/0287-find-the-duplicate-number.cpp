class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    // TC: O(nlog(n))
    //        sort(nums.begin(),nums.end());
    //        for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             return nums[i];
    //         }
    //        }
    //   return -1;


    //indexing method
    //negetive marking method(array modify nhi karna hai)
    //yaha par ho raha hai isliye isko use nhi karenge
    for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]);
            if (nums[index] < 0) {
                return index;
            }
            nums[index] = -nums[index];
        }
        return -1;


    //positioning method
    // while(nums[0]!=nums[nums[0]]){
    //     swap(nums[0],nums[nums[0]]);
    // }
    // return nums[0];
     }
};