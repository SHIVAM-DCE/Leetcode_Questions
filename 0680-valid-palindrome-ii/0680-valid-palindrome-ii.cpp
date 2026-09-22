class Solution {
public:
    bool checkPalindrome(string s,int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                // ek bar i ko remove krke check krenge and ek bar j ko
                return checkPalindrome(s,i+1,j)||checkPalindrome(s,i,j-1);
            }else{
                // s[i]==s[j]
                i++;
                j--;
            }
        }
        return true;
    }
};