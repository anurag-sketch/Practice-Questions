class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool flag=false;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 1)
            {
                flag=true;
            }
            
            if(nums[i]<1 || nums[i]>n)
            {
                nums[i]=1;
            }
        }
        
        if(flag == false)
        {
            return 1;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            
            int index = abs(nums[i]);
            nums[index - 1] = -1 * abs(nums[index-1]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                return i+1;
            }
        }
        return n+1;
        
        
    }
};