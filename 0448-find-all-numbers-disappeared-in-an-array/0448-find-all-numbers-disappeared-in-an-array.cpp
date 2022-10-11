class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
       
        
        int mx;
        mx=nums.size();
        int i=0;
        // while(i<(nums.size()))
        // {
        //     mx=max(mx,nums[i]);
        //     i++;
        // }
        vector<int> a(mx+1);
        int j=0;
        while(j<(mx+1))
        {
            a[j]=0;
            j++;
        }
        
        for(int i=0;i<nums.size();i++)
        {
           
             a[nums[i]]++;
          
        }
        int jj=1;
        vector<int> ans;
        while(jj<(mx+1))
        {
            if(a[jj]==0)
            {
                ans.push_back(jj);
            }
            jj++;
        }
        return ans;
        
        
        
    }
};