class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int profit=INT_MIN;
        bool flag = false;
        for(int i = 0;i<prices.size();i++)
        {
            if(prices[i] < mn) mn = prices[i];
             else
             {
                   int x = prices[i] - mn;
                  profit = max(x , profit);
                 flag = true;
             }
              
        }
        if(flag == false) return 0;
        else return profit;
    }
};