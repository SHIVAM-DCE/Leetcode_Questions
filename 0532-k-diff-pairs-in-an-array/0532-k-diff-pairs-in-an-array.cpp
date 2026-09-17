class Solution {
public:

    int binarysearch(vector<int>&nums,int start,int value/*a[i]+k*/){
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==value){
                return mid;
            }
            else if(value>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {

        // brut force method
        // set<pair<int ,int>>ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(abs(nums[i]-nums[j])==k){
        //             ans.insert({min(nums[i], nums[j]),max(nums[i], nums[j])});
        //         }
        //     }
        // }
        // return ans.size();



        //two pointer method
        // sort(nums.begin(),nums.end());
        // int size=nums.size();
        // set<pair<int,int>> ans;
        // int i=0,j=1;
        // while(j<size){
        //     int diff=nums[j]-nums[i];
        //     if(diff==k){
        //         ans.insert({nums[i],nums[j]});
        //         i++;
        //         j++;
        //     }else if(diff>k){
        //         i++;
        //     }else{
        //         j++;
        //     }
        //     if(i==j){
        //         j++;
        //     }
        // }
        // return ans.size();


        // unordered map technique
        unordered_map<int,int> countMap;
        for(int i=0;i<nums.size();i++){
            countMap[nums[i]]++;
        }

        int ans=0;
        for(auto& [num,count]:countMap){
            if(k==0){
                if(count>1){
                    ans++;
                } 
            }else{
                //k>0
                // .count() ek fxn. hai jo btata hai ki key present hai ki nhi map me
                if(countMap.count(num+k)) ans++;
            }
        }
        return ans;






        //binary search method:
        // sort(nums.begin(),nums.end());
        // set<pair<int,int>>ans;
        // for(int i=0;i<nums.size();i++){
        //     if(binarysearch(nums,i+1,nums[i]+k)!=-1){
        //         ans.insert({nums[i],nums[i]+k});
        //     }
        // }
        // return ans.size();
    }
};