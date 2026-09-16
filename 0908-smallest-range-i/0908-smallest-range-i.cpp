class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());

        int newGap=mx-mn-2*k;
        return max(0,newGap);
    }
};