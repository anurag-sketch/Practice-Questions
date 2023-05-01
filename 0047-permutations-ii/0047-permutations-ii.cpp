class Solution {
public:
    
      set<vector<int>> ans;
    
    
    void ms(int index,vector<int> &nums,int n)
    {
        if(index >= n)
        {
            ans.insert(nums);
            return;
        }
        
        for(int i=index;i<n;i++)
        {
            swap(nums[index],nums[i]);
            ms(index+1,nums,n);
               swap(nums[index],nums[i]);
        }
        
        
        return;
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        ms(0,nums,nums.size());
        
        vector<vector<int>> v;
        
      set<vector<int>> :: iterator it;
        
        for(it=ans.begin();it!=ans.end();it++)
        {
            v.push_back(*it);
        }
        return v;
        
    }
};