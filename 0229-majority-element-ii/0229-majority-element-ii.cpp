class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
             int majo = (nums.size())/3;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] ++;
        }
            unordered_map<int,int> :: iterator ip;
        vector<int> ans;
        for(ip=mp.begin();ip!=mp.end();ip++)
        {
            if(ip->second > majo)
            {
                ans.push_back(ip->first);
            }
        }
        return ans;
        
    }
};