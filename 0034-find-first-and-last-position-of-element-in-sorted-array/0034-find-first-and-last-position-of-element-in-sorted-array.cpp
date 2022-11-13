class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int low=0;
        int high=nums.size() - 1;
        int first=-1;
        while(low<=high)
        {
            int mid = low + ((high -low )/2);
            if(nums[mid] == target)
            {
                first=mid;
                high=mid-1;
                
            }
            else if(nums[mid] < target)
            {
                 
                 low=mid+1;  
            }
            else
            {
                high=mid-1;
             
            }
        }
        low=0;
        high=nums.size()-1;
        int last=-1;
        
          while(low<=high)
        {
            int mid = low + ((high -low )/2);
            if(nums[mid] == target)
            {
                last=mid;
                low=mid+1;
                
            }
            else if(nums[mid] < target)
            {
                 
                 low=mid+1;  
            }
            else
            {
                high=mid-1;
             
            }
        }
        
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);

        
        
        return ans;
    }
};