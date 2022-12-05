class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        int mn = INT_MIN;
        bool flag=false;
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]%2 == 0)
            {
                flag=true;
                mp[nums[i]] ++;
            }
        }
        if(flag==true)
        {
             unordered_map<int,int> :: iterator ip;
        
        for(ip=mp.begin();ip!=mp.end();ip++)
        {        
            mn = max(mn,ip->second);
        }
        vector<int> ans;
        for(ip=mp.begin();ip!=mp.end();ip++)
        {
            if(ip->second == mn)
            {
                ans.push_back(ip->first);
            }
        }
        sort(ans.begin() , ans.end());
        return ans[0];      
        }
        else
        {
            return -1;
        }
     
        
        
        
    }
};