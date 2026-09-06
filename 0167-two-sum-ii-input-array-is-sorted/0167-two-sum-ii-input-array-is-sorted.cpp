class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int i=0;
        int j=numbers.size()-1;
        while(j<numbers.size()){
            int currentSum=numbers[i]+numbers[j];
            if(currentSum == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }else if(currentSum < target){
                i+=1;
            }else{
                j-=1;
            }
        }
        return ans;
    }
};