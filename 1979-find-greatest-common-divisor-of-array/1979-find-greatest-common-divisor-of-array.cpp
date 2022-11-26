class Solution {
public:
    
    int GCD(int x , int y)
    {
        if(x == 0)
        {
            return y;
        }
        return GCD(y % x , x);
    }
    
    int findGCD(vector<int>& nums) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        
        for(int i = 0;i<nums.size() ;i++)
        {
            mn = min(mn,nums[i]);
            mx = max(mx,nums[i]);
        }
        
        int ans;
        ans = GCD(mn,mx);
        return ans;
        
    }
};