class Solution {
public:
    bool isprime(int n){
        if(n==1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(isprime(nums[i])){
                arr.push_back(i);
            }
        }
        return abs(arr[arr.size()-1]-arr[0]);
    }
};