class Solution {
public:
    int findPivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(s==e){
                return s;
            }else if(mid+1<=e && nums[mid]>nums[mid+1]){
                return mid;
            }else if(mid-1>=s && nums[mid-1]>nums[mid]){
                return mid-1;
            }else if(nums[s]>nums[mid]){
                e=mid;
            }else{
                s=mid+1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>& nums,int s,int e,int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        if(nums.empty()) return -1;
        int pivotIndex=findPivot(nums);
        int ans=-1;
        if(target>=nums[0] && target<=nums[pivotIndex]){
            ans=binarySearch(nums,0,pivotIndex,target);
        }else{
            ans=binarySearch(nums,pivotIndex+1,nums.size()-1,target);
        }
        return ans;
    }
};