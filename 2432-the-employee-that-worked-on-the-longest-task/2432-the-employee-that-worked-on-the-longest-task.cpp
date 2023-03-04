class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
               int d=logs[0][1];
        
        int ind=logs[0][0];
        
        for(int i=1;i<=logs.size()-1;i++)
        {
            int res =logs[i][1]-logs[i-1][1];
            
            if(res==d)
            {
                
                ind=min(ind,logs[i][0]);
                
            }
            
            if(res >d)
            {
                d=res;
                
                ind=logs[i][0];
                
            }
        }
        
        return ind;
        
    }
};