class Solution {
public:
    // DP---> memory optimization method
    // int fib(int n) {
    //     if(n==0||n==1) return n;
    //     int a=0;
    //     int b=1;
    //     for(int i=2;i<=n;i++){
    //         int next=a+b;
    //         a=b;
    //         b=next;
    //     }
    //     return b;
    // }



    // DP ---> itration + tabluation
    // int fib(int n){
    //     if(n==0||n==1) return n;
    //     vector<int>dp(n+1,-1);

    //     dp[0]=0;
    //     dp[1]=1;

    //     for(int i=2;i<=n;i++){
    //         dp[i]=dp[i-1]+dp[i-2];
    //     }
    //     return dp[n];
    // }


    // DP ---> recursion + memoization
    int fibonacci(int n,vector<int>&dp){
        if(n==0||n==1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=fibonacci((n-1),dp)+fibonacci((n-2),dp);
        return dp[n];
    }
    int fib(int n){
        vector<int>dp(n+1,-1);
        return fibonacci(n,dp);
        
    }
};