class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
         unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] ++;
        }
        
        unordered_map<int,int> :: iterator ip;
        for(ip=mp.begin();ip!=mp.end();ip++)
        {
            if(ip->second == 1) return ip->first;
        }
    return 0;
        
    }
};