class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int times=0;
        while(times<4)
        {
              for(int i=0;i<mat.size();i++)
              {
                  for(int j=i;j<mat.size();j++)
                  {
                      swap(mat[i][j],mat[j][i]);
                  }
              }
            
            int start=0;
            int end=mat.size()-1;
            int i=0;
            while(start<=end)
            {
                for(int k=0;k<mat.size();k++)
                {
                    swap(mat[i][start],mat[i][end]);
                    i++;
                }
                i=0;
                start++;
                end--;
            }
            if(mat == target)
                
            {
                return true;
            }
            times++;
            
        }
        
        return false;
        
        
       
        
    }
};