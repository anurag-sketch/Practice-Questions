class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int freq=0;
            int val=0;
            if((2*i+1) < nums.size())
            {
               freq=nums[2*i];
               val = nums[2*i+1];    
                
                for(int i = 0 ;i<freq;i++)
                {
                    ans.push_back(val);
                }
                    
                
            }
           
        }
        return ans;
        
    }
};