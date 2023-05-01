class Solution {
public:
    vector<vector<int>> ans;
    
    
    void ms(int index,vector<int> &nums,int n)
    {
        if(index >= n)
        {
            ans.push_back(nums);
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
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        ms(0,nums,nums.size());
        return ans;
        
    }
};