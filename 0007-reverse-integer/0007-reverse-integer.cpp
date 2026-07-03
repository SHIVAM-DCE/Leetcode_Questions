class Solution{
public:
    int reverse(int n){
    int rem=0;
    int ans=0;
    bool isnegetive=false;
    if(n<=INT_MIN){
        return 0;
    }
    if(n<0){
        isnegetive=true;
        n=-n;
    }
    while(n>0){
         if(ans>INT_MAX/10){
            return 0;
         }
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    return isnegetive?-ans:ans;
}
};
