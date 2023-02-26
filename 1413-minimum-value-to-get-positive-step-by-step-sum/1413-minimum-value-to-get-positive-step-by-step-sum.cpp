class Solution {
public:
    int minStartValue(vector<int>& nums) {
        bool neg=true;
        for(int i=0;i<nums.size();i++) 
        {
            if(nums[i]<0) neg=false;
        }
        if(neg == true)
        {
            return 1;
        }
        
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            mn = min(mn,nums[i]);
        }
        
        int comp= 0;
        bool ans=false;
        int sum = comp;
        while(ans!=true)
        {
            bool xx=false;
            int k; 
            k = comp;
            for(int i=0;i<nums.size();i++)
            {
                k = k + nums[i];
                if(k < 0) xx=true;
            }
            if(xx == false) return comp+1;
            comp++;
        }
        return 0;
        
        
    }
};