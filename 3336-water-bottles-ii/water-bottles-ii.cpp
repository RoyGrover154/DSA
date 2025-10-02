class Solution {
public:

    int maxBottlesDrunk(int numBottles, int numExchange) {
        
        int max_bottle = numBottles;
        int empty = numBottles;

        while(empty >= numExchange){
                empty = empty - numExchange;
                max_bottle++;
                empty++;
                numExchange++;
        }
        return max_bottle;
    }
};