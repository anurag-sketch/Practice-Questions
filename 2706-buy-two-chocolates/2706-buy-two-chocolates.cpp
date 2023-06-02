class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());
        int ans = money;
        int count = 0;
        bool flag = true;
        for(int i=0;i<prices.size();i++)
        {
            if((prices[i] <= money) and (flag == true))
            {
                if((money-prices[i]) >= 0)
                {
                    count ++;
                      money = money - prices[i];
                    if(count == 2)
                    {
                       
                        flag = false;
                        return money;
                    }
                }
               
            }
       
        }
             return ans;
        
    }
};