class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans;
        int distance=INT_MAX;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i]) <= distance)
            {
                distance = abs(nums[i]);
                ans = nums[i];
            }
        }
        
        return ans;
    }
};