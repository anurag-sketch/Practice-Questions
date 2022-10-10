class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans;
        int i=0;
        while(i<(nums.size()))
        {
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};