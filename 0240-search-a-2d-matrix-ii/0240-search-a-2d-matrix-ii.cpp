class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
//         int start=0;
//         int end=matrix.size()-1;
//         int k=0;
//         int index = INT_MIN;
//         while(start<=end)
//         {
//             int mid = start+(end-start)/2;
//             if(matrix[k][mid] == target)
//             {
//                 return true;
//             }
//             else if(matrix[k][mid] > target)
//             {
//                 end = mid-1;
//             }
//             else
//             {
//                 start = mid+1;
//             }
//             if(matrix[k][mid] < target)
//             {
//                 index = max(index,mid);
//             }
//         }
        
//         start=0;
//         end = matrix.size()-1;
//         k =index;
        
//         while(start<=end)
//         {
//             int mid = start + (end-start)/2;
//             if(matrix[mid][k] == target)
//             {
//                 return true;
//             }
//             else if(matrix[mid][k] > target)
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 start=mid+1;
//             }
//         }
//         return false;
        
    
       
        
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