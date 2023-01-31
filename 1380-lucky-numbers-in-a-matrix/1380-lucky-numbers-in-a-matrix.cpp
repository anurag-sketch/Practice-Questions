class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        vector<int> vmin;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            int mn=INT_MAX;
            for(int j=0;j<col;j++)
            {
                mn = min(mn,matrix[i][j]);
            }
            vmin.push_back(mn);
        }
        vector<int> vmax;
        
        for(int i=0;i<col;i++)
        {
            int mx = INT_MIN;
            for(int j=0;j<row;j++)
            {
                mx = max(mx,matrix[j][i]);
            }
            vmax.push_back(mx);
            
        }
        vector<int> ans;
        
        for(int i=0;i<vmin.size();i++)
        {
            for(int j=0;j<vmax.size();j++)
            {
                if(vmin[i] == vmax[j]) ans.push_back(vmin[i]);
            }
        }
        return ans;
        
    }
};