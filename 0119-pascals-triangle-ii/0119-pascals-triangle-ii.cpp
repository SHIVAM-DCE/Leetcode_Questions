class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // iska space complexity jyada hai O(n^2)
        // vector<vector<int>>ans;
        // for(int i=0;i<=rowIndex;i++){
        //     vector<int>currentRow(i+1,1);
        //     for(int j=1;j<i;j++){
        //         currentRow[j]=ans[i-1][j-1]+ans[i-1][j];
        //     }
        //     ans.push_back(currentRow);
        // }
        // return ans[rowIndex];

        vector<int>ans(rowIndex+1,1);
        for(int i=1;i<=rowIndex;i++){
            for(int j=i-1;j>0;j--){
                ans[j]=ans[j]+ans[j-1];
            }
        }
        return ans;
    }
};