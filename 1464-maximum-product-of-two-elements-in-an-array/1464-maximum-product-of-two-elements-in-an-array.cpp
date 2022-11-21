class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int secondlast= nums.size()-2;
        int last=nums.size()-1;
        
        return ((nums[last]-1)*(nums[secondlast]-1));
        
    }
};