class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
         if (nums.size() <= 2)
            return false;
        
        for (int i = 1; i < nums.size(); i++)
        {
            int sum = nums[i-1] + nums[i];
            nums[i-1] = sum;
        }
        nums.pop_back();
        sort (nums.begin(), nums.end());
        
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i-1] == nums[i])
                return true;
        }
        return false;
    }
};