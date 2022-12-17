class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        
        set<int> :: iterator it;
        
        if(s.size()>=3)
        {
            int count = 0;
            for(it=s.begin();it!=s.end();it++)
            {
              
                if(count == s.size()-3)
                {
                    return *it;
                }
                  count++;
            }
        }
        
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mx = max(mx , nums[i]);
        }
        return mx;
        
    }
};