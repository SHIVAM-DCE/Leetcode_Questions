class Solution {
public:
int expandaroundindex(string s,int left,int right){
    int count = 0;
    //jab tak match karega , tab tak count increment kar do and i piche lo aur j ko badha do
    while(left>=0&&right<s.length()&&s[left]==s[right]){
        count++;
        left--;
        right++;
    }
    return count;
}
    int countSubstrings(string s) {
        int count =0;
        int n = s.length();

        for(int center=0;center<n;center++){
            //odd
                int oddKaAns=expandaroundindex(s,center,center);
                count=count+oddKaAns;

            //even
                int evenkaans=expandaroundindex(s,center,center+1);
                count=count+evenkaans;
        }
        return count;
    }
};