class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int si=nums.size();
        
        int mx=INT_MIN;
        int i=0;
        int s=0;
        while(i<si)
        {
            
            s=s+nums[i];
            i++;
        }
        int sum;
        sum=((si)*(si+1))/2;
        return (sum-s);
        
    }
};