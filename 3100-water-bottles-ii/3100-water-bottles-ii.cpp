class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptyBottles=numBottles;
        int BottleDrunk=numBottles;
        int exchange=0;

        while(emptyBottles>=numExchange){
            emptyBottles=emptyBottles-numExchange;
            exchange+=1;
            numExchange+=1;
            if(emptyBottles<numExchange){
                BottleDrunk+=exchange;
                emptyBottles+=exchange;
                exchange=0;
            }
        }
        return BottleDrunk;
    }
};