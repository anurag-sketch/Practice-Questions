class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        
        sort(costs.begin(),costs.end());
        int sum = 0;
        for(int i=0;i<costs.size();i++)
        {
            sum = sum + costs[i];
            if(sum > coins)
            {
                break;
            }
            count++;
        }
        return count;
        
    }
};