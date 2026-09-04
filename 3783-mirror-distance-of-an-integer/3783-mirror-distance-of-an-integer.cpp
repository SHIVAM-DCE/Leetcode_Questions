class Solution {
public:
    int mirrorDistance(int n) {
        int reverse=0;
        int num=n;
        while(num!=0){
            int rem=num%10;
            reverse=reverse*10+rem;
            num=num/10;
        }
        return abs(reverse-n);
    }
};