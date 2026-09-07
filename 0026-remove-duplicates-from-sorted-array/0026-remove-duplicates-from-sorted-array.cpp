class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
    //     vector<int>ans;
    //     int i=0;
    //     int j=1;
    //     int count=0;
    //     ans.push_back(nums[0]);
    //     for(int i=1;i<size;i++){
    //         if(nums[i]!=ans[count]){
    //             ans.push_back(nums[i]);
    //             count+=1;
    //         }
    //     }
    //     int res=ans.size();
    //     for(int j=0;j<res;j++){
    //         nums[j]=ans[j];
    //     }
    //     return res;


    int i=1;
    int j=1;
    while(i<size){
        if(nums[i]!=nums[i-1]){
            nums[j]=nums[i];
            j++;
        }
        i++;
    }
    return j;
     }
};