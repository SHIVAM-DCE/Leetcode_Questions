class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";

        string hex_Map="0123456789abcdef";
        string ans="";
        // Convert to unsigned int to handle negative numbers automatically
        unsigned int n=num;

        while(n!=0){
            int rem = n%16;
            ans+=hex_Map[rem];
            n/=16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};