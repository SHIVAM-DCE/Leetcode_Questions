class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>ans(num_people,0);
        int give=1;
        int i=0;
        while(candies>0){
            int currentGift=min(candies,give);
            ans[i%num_people]+=currentGift;
            candies-=currentGift;
            i++;
            give++;
        }
        return ans;
    }
};