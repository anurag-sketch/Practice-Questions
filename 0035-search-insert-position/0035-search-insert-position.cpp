class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
      
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high)
        {
            int mid = (low + high)/2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                  low=mid+1;
              
            }
            else
            {
                  high = mid-1;
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