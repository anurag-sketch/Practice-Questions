class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        
        int count=0;
        
        string k="";
        
        for(int i=0;i<nums.size();i++)
        {
            string s = to_string(nums[i]);
            k = k + s;
        }
        
        for(int i=0;i<k.size();i++)
        {
            int x = k[i] - '0';
            count = x + count;
        }
        
        return abs(count - sum);
        
        
    }
};