class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";

        string hex_Map="0123456789abcdef";
        string ans="";
        unsigned int n=num;

        while(n!=0){
            int rem = n&15;
            ans+=hex_Map[rem];
            n>>=4;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};