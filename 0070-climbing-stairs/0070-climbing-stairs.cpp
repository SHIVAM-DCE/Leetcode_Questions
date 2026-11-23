class Solution {
public:
    int solve(int n, vector<int>& dp) {
        // Base case: 0 ya 1 stair chadhne ka sirf 1 hi tareeka hai
        if (n == 0 || n == 1) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }
    int climbStairs(int n) {
        //memory optimization method
        // if (n==0||n==1) return 1;
        // int a=1;
        // int b=1;
        // for(int i=2;i<=n;i++){
        //     int temp=a+b;
        //     a=b;
        //     b=temp;
        // }
        // return b;



        // iteration + tabluation method (DP)
        // if (n == 0 || n == 1) {
        //     return 1;
        // }
        
        // vector<int> dp(n + 1);
        // dp[0] = 1; // 0th stair par rehne ka 1 tareeka
        // dp[1] = 1; // 1st stair par jaane ka 1 tareeka
        
        // for (int i = 2; i <= n; i++) {
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }
        
        // return dp[n];
   
        // }





        // recursion + memoization  (recursion part upar hai)      
            vector<int> dp(n + 1, -1);
            return solve(n, dp);
        }
};