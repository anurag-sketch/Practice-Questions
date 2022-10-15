class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mx=INT_MIN;
           for(int i=0;i<nums.size();i++)
               {
                   mx=max(nums[i],mx);
               }
           if(nums.size()<=2)
           {
            
               for(int i=0;i<nums.size();i++)
               {
                   if(nums[i]==mx)
                   {
                       return i;
                   }
               }
           }


        if(nums.size()>2)
        {

        for(int i=1;i<nums.size()-1;i++)
        {
            if((nums[i]>nums[i-1]) && (nums[i]>nums[i+1]))
            {
                return i;
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==mx)
            {
                return i;
            }
        }
        }
        return 0;
    }
};