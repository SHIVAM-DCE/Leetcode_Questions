class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int minPrice=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }else{
                int pf=(prices[i]-minPrice-fee);
                if(pf>0){
                    profit+=pf;
                    minPrice=prices[i]-fee;
                }
                
            }
        }
        return profit;
    }
};