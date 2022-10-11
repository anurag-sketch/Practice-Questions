class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
//      vector<int> ans;
//         for(int i=1;i<=(nums.size());i++)
//         {
            
//             if(nums[nums[i-1]]>0)
//             {
//                 nums[nums[i-1]]=(-1)*(nums[nums[i-1]]);
//             }
//             else
//             {
//                 ans.push_back(nums[nums[i-1]]);
//             }
//         }
    
//         return ans;
        
        vector<int> result;
        for(int n : nums)
        {
            n=abs(n);
            if(nums[n-1]>0) nums[n-1] *=-1;
            else result.push_back(n);
         }
        return result;
                
    }
};