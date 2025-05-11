class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];

        for(int i=1; i<n; i++){
            if(mini < prices[i]){
                profit += prices[i] - mini;  
            }
            mini = prices[i];
         }
        return profit;
    }
};