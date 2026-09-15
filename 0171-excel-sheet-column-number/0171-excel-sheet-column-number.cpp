class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(char c : columnTitle){
            // int value = c-'A'+1;
            ans=ans*26+(c-'A'+1);
        }
        return ans;

    }
};