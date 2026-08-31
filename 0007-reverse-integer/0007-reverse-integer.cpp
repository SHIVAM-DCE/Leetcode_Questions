class Solution {
public:
    int reverse(int x) {
        bool isNegetive=false;
        long long int num=x;
        if(num<0){
            isNegetive=true;
            num = -num;
        }
        long long int ans=0,rem=0;
        while(num != 0){
            rem=num % 10;
            ans=ans*10+rem;
            num /= 10;
        }
        if(ans < INT_MIN || ans>INT_MAX){
            return 0;
        }
        return isNegetive ? -ans : ans;
    }
};