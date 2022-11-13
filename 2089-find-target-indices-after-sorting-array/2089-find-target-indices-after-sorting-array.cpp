class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;
        
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                v.push_back(i);
            }
        }
     sort(v.begin() , v.end());
        return v;
    }
};