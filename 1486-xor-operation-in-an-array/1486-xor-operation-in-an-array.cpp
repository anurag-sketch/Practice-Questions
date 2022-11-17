class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums;
        
        for(int i=0;i<n;i++)
        {
            int k;
            k=start + (2*i);
            nums.push_back(k);
        }
        
        int l=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            l=l^(nums[i]);
        }
        return l;
        
    }
};