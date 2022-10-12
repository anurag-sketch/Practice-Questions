class Solution {
public:
   
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();    
        int t[n+1][amount+1];
        int j=0,i=0;
        while(j<(amount+1))
        {
            t[i][j]=INT_MAX-1;
            j++;
        }
        i=1;
        j=0;
        while(i<(n+1))
        {
            t[i][j]=0;
            i++;
        }
        
        for(int i=1;j<(amount+1);j++)
        {
            if(j%coins[0] == 0)
            {
                t[i][j]=(j/coins[0]);
            }
            else
            {
                t[i][j]=INT_MAX-1;
            }
        }
        
        for(int i=2;i<(n+1);i++)
        {
            for(int j=1;j<(amount+1);j++)
            {
                if(coins[i-1]<=j)
                {
                    t[i][j]=min((t[i][j-coins[i-1]] + 1 ) , t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
     if(t[n][amount]>amount)
     {
return -1;
     }
        else
        {
return t[n][amount];
        }
        }
    
};