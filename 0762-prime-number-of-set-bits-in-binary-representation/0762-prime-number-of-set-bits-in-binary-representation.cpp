class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        unordered_set<int>prime = {2,3,5,7,11,13,17,19};
        int count=0;
        for(int i=left;i<=right;i++){
            // __builtin_popcount(): to count number of one comes in it's binary form or setbits.
            // count() ek fxn hai jo batata hai ki value set me present hai ya nhi in form of 0 and 1.
            if(prime.count(__builtin_popcount(i))){
                count++;
            }
        }
        return count;
    }
};