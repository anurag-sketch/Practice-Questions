class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int profit=0;
        
        for(int i = 0;i<prices.size();i++)
        {
            if(prices[i] < mn) mn = prices[i];
             else
             {
                   int x = prices[i] - mn;
                  profit = max(x , profit);
            
             }
              
        }
         return profit;
    }
};