class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalBottles=numBottles;
        while(numBottles>=numExchange){
            int newEmptyBottle=numBottles/numExchange;
            int oldEmptybottle=numBottles%numExchange;

            totalBottles+=newEmptyBottle;
            numBottles=newEmptyBottle+oldEmptybottle;
        }
        return totalBottles;
    }
};