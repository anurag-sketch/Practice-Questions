class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count=0;
        vector<string> v;
        
        for(int i=0;i<nums.size();i++)
        {
            
            string x = to_string(nums[i]);
            
            if(x.size() %2 == 0)
            {
                count++;
            }
            
            
        }
        return count;
        
    }
};