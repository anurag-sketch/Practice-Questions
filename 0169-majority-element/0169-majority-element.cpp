class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majo = (nums.size())/2;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] ++;
        }
            unordered_map<int,int> :: iterator ip;
        
        for(ip=mp.begin();ip!=mp.end();ip++)
        {
            if(ip->second > majo)
            {
                return ip->first;
            }
        }
        return -1;
        
        
    }
};