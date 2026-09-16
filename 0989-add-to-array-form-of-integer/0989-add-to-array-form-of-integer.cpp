class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>arr;
        int n=num.size()-1;
        int carry=0;
        int sum=0;
        while(n>=0 || k!=0 || carry){
            sum=carry;
            if(k!=0){
                sum+=(k%10);
                k/=10;
            }
            if(n>=0){
                sum+=num[n];
                n--;
            }
            carry=sum/10;
            arr.push_back(sum%10);
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};