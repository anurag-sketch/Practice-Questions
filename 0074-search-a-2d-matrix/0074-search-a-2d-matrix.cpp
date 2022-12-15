class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        
      int i=0;
        int j=matrix[i].size()-1;
        
        while(i>=0 && i<matrix.size() && j>=0 && j<matrix[i].size())
        {
            if(matrix[i][j] == target)
            {
                return true;
            }
            else if(matrix[i][j] > target)
            {
                j--;
            }
            else if(matrix[i][j] < target)
            {
               i++;
            }
        }
        return false;
        
    }
};