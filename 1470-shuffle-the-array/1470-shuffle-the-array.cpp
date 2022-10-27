class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> nums1;
        for(int i=0;i<(n);i++)
        {
            nums1.push_back(nums[i]);
        }
        vector<int> nums2;
        
        for(int i=n ;i<nums.size();i++)
        {
            nums2.push_back(nums[i]);
        }
        
        vector<int> ans;
        for(int i=0;i<(n);i++)
        {
            ans.push_back(nums1[i]);
            ans.push_back(nums2[i]);
        }
        return ans;
    }
};