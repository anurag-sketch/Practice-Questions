class Solution {
public:
    
    vector<vector<int>> ans;
    
    void com (int index,int sum,vector<int> &temp, vector<int> &candi,int n)
    {
        if(index == n)
        {
            if(sum == 0)
            {
                ans.push_back(temp);
                return;
            }
            return;
        }
        
        if(candi[index]  <=  sum)
        {
            temp.push_back(candi[index]);
            com(index,sum-candi[index],temp,candi,n);
            temp.pop_back();
        }
        
        com(index+1,sum,temp,candi,n);
        return;
        
            
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> temp;
        com(0,target,temp,candidates,candidates.size());
        return ans;
        
    }
};