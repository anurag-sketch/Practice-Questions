class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        if(nums[0] < nums[nums.size()-1])
        {
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i-1] > nums[i])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
                        for(int i=1;i<nums.size();i++)
            {
                if(nums[i-1] < nums[i])
                {
                    return false;
                }
            }
            return true;
            
        }
    }
};