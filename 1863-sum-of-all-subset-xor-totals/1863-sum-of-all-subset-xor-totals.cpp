class Solution {
public:
    vector<vector<int>> v;
    
    void fun(vector<int> ip , vector<int> op)
    {
        if(ip.size() == 0)
        {
            v.push_back(op);
            return ;
        }
        
        vector<int> op1 = op;
        vector<int> op2 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        fun(ip,op1);
        fun(ip,op2);
        return ;
        
    }
    
    
    int subsetXORSum(vector<int>& nums) {
        
        int sum =0;
        if(nums.size() == 0)
        {
            return 0;
        }
        
        vector<int> op ;
        fun(nums,op);
        
        for(int i=0;i<v.size();i++)
        {
            int x=0;
        
            for(int j=0;j<v[i].size();j++)
            {
                x = x ^ (v[i][j]);
            }
            sum = sum + x;
        }
        return sum;
        
    }
};