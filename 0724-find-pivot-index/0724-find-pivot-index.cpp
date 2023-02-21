class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
  int sum1=0;
        int sum2=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i == 0) sum1=0;
            if(i == nums.size()-1) sum2=0;
            if(i > 0) sum1 = sum1+nums[i-1];
            if(i!=nums.size()-1)
            {
                 for(int j=nums.size()-1;j>i;j--)
            {
                sum2=sum2+nums[j];
            }
                
            }
           
            if(sum1 == sum2) return i;
            sum2=0;
            
        }
        return -1;
        
        
    }
};