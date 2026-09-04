class Solution {
public:
    int sumOfDigit(int num){
        int n=num;
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    int singleDigit(int num){
        int n=num;
        while(true){
            if(n>=0 && n<=9){
                return n;
                break;
            }else{
                n=sumOfDigit(n);
            }
        }    
    }
    int addDigits(int num) {
        return singleDigit(num);
    }
};