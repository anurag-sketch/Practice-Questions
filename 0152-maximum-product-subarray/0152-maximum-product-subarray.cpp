class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sum=1;
        int maxi=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            
            sum=sum*nums[i];
            maxi=max(maxi,sum);
            if(sum==0)
            {
                sum=1;
            }
            
        }
        
        sum=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum=sum*nums[i];
            maxi=max(sum,maxi);
            if(sum==0)
            {
                sum=1;
            }
        }
        
        
        return maxi;
        
    }
};