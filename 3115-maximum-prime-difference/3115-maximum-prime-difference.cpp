class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int firstIndex;
        int lastIndex;
        for(int i=0;i<nums.size();i++){
            if(isprime(nums[i])){
                firstIndex=i;
                break;
            }
        }
        for(int i=(nums.size()-1);i>=0;i--){
            if(isprime(nums[i])){
                lastIndex=i;
                break;
            }
        }
        return abs(lastIndex-firstIndex);
    }
};