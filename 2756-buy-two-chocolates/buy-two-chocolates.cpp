class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
         int n = prices.size();
         int ans = money;
         int count = 0;
               
        sort(prices.begin(),prices.end());

            if(prices[0] >= money){
                return money;
            }

        for(int i=0; i<n  && count < 2; i++){
            if(prices[i] <= ans){
              ans = ans - prices[i]; 
              count = count +1;
            }
        }

        if(count == 2){
            return ans;
        }
        return money;

    }
};