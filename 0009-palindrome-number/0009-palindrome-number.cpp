class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long long newNum=0;
        while(n!=0){
            int rem=n%10;
            newNum=newNum*10+rem;
            n=n/10;
        }
        return x==newNum;
    }
};