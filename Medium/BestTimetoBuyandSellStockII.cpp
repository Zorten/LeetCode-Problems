class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        SOLUTION 1
        int size = prices.size();
        int max_profit = 0;
        
        for (int i = 1; i < size; ++i){
            if (prices[i] > prices[i-1]){
                max_profit += prices[i] - prices[i-1];
            }
        }
        
        return max_profit;
        */
        
        
        //SOLUTION 2
        int size = prices.size();
        int max_profit = 0;
        int i = 0;
        
        while (i < size - 1){
            while ((i != size - 1) && (prices.at(i) >= prices.at(i+1))){
                ++i;
            }
            max_profit -= prices.at(i);
            
            while ((i != size - 1) && (prices.at(i) <= prices.at(i+1))){
                ++i;
            }
            max_profit += prices.at(i);
        }
        
        return max_profit;
    }
};
