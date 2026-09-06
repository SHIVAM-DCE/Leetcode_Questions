class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int currentSum=numbers[i]+numbers[j];
            if(currentSum == target){
                return {i+1,j+1};
            }else if(currentSum < target){
                i+=1;
            }else{
                j-=1;
            }
        }
        return {0,0};
    }
};