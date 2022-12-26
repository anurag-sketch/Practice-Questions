class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int mx = INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            mx = max(mx , nums[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(2*nums[i] > mx && mx != nums[i])
            {
                return -1;
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(mx == nums[i])
            {
                return i;
            }
        }
        return -1;
        
    }
};