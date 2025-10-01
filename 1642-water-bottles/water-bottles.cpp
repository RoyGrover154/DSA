class Solution {
public:

        int check(int num, int exchange,int &max_drink){

            if(num < exchange){
                return max_drink;
            }
            int new_bottle = num / exchange;
            int leftover = num % exchange;
            max_drink += new_bottle;
            
       return check(new_bottle + leftover, exchange,max_drink);

        
        }


    int numWaterBottles(int numBottles, int numExchange) {
        int max_drink = numBottles;
        return check(numBottles, numExchange ,max_drink);
    }
};