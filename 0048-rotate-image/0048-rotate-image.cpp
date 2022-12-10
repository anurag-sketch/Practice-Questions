class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //Upper triangle swap
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix.size();j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        //Col swap
        
        int i=0;
        int start=0;
        int end=matrix.size()-1;
        while(start<=end)
        {
           for(int k=0;k<matrix.size();k++)
           {
            swap(matrix[i][start],matrix[i][end]);
            i++;    
           }
            i=0;
           
                start++;
              end--;
        }  
        
        
        
    }
};