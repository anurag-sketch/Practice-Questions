class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(target<nums[i])
            {
                return (i);
            }
            count++;
        }
        if(count==(nums.size()))
        {
         return (nums.size());
        }
        
        
        return -1;
        
    }
  
};