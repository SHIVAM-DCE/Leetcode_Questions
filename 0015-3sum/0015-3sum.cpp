class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;

        for(int i=0;i<(n-2);i++){
            // after sorting if 1st num is greater than 0 then we have to break the loop
            if(nums[i]>0) break;

            // handling duplicates
            if(i>0 && nums[i]==nums[i-1]) continue;

            // two pointer approach
            int s=i+1;
            int e=n-1;
            while(s<e){
                int total = nums[i] + nums[s] + nums[e];
        
                if(total<0){
                    s++;        // Sum too small, move rightward
                }else if(total>0){
                    e--;        // Sum too large, move leftward
                }else{
                    // Found a valid unique triplet
                    ans.push_back({nums[i],nums[s],nums[e]});

                    //handling duplicates in left side
                    while(s<e && nums[s]==nums[s+1]){
                        s++;
                    }

                    //handling duplicates in right side
                    while(s<e && nums[e]==nums[e-1]){
                        e--;;
                    }
                    s++;
                    e--;
                }

            }
        }
        return ans;
    }
};