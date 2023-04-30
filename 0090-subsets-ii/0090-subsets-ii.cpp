class Solution {
public:
    
    set<vector<int>> s;
    
    void ms(int index, vector<int> &temp, int size, vector<int>& nums)
    {
        if(index == size)
        {
            s.insert(temp);
            return;
        }
        
        temp.push_back(nums[index]);
        ms(index+1,temp,size,nums);
        temp.pop_back();
        ms(index+1,temp,size,nums);
        
        return;
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        ms(0,temp,nums.size(),nums);
        
        vector<vector<int>> ans;
        
        set<vector<int>> :: iterator it;
        
        for(it=s.begin();it!=s.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
        
        
    }
};