class Solution {
public:
    bool isPalindrome(int x) {
        // method 1
        // if(x<0){
        //     return false;
        // }
        // int n=x;
        // long long newNum=0;
        // while(n!=0){
        //     int rem=n%10;
        //     newNum=newNum*10+rem;
        //     n=n/10;
        // }
        // return x==newNum;

        //method 2:
        string str=to_string(x);
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str[i]==str[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};