class Solution {
public:
    
    vector<vector<int>> ans;
    
    vector<vector<int>> solve(vector<int> ip , vector<int> op)
    {
        
        if(ip.size()==0)
        {
            ans.push_back(op);
            return ans;
        }
        
        vector<int> op1;
        vector<int> op2;
        op1=op;
        op2=op;
        op2.push_back(ip[0]);
        
     ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
        return ans;
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> op;
        
     
     ans=  solve(nums,op);
        return ans;
        
    }
};