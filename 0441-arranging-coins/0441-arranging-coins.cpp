class Solution {
public:
    int arrangeCoins(int n) {
        // int ans=0;
        // for(int i=1;i<=n;i++){
        //     n-=i;
        //     ans+=1;
        // }
        // return ans;

        int s=1;
        int e=n;
        int ans;
        while(s<=e){
            long mid=s+(e-s)/2;
            long coinNeed=mid*(mid+1)/2;
            if(coinNeed<=n){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};