class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int richest=0;
        int mx=INT_MIN;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                richest=richest+accounts[i][j];
            }
            mx=max(mx,richest);
            richest=0;
        }
        return mx;
        
    }
};