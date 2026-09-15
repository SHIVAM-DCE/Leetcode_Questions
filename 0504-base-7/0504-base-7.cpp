class Solution {
public:
    string convertToBase7(int num) {
        if (num==0) return "0";
        string ans="";
        int n=abs(num);
        while(n!=0){
            ans+=(n % 7)+'0';
            n/=7;
        }
        reverse(ans.begin(),ans.end());
        if(num<0){
            ans.insert(ans.begin(),'-');
        }
        return ans;
    }
};