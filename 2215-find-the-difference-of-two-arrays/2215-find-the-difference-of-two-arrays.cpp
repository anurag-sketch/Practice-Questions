class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans;
        bool ispresent = false;
        
        vector<int> ans1;
        set<int> s;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i] == nums2[j])
                {
                    ispresent = true;
                }
            }
            if(ispresent == false)
            {
                s.insert(nums1[i]);
            }
            ispresent=false;
        }
        
        set<int> :: iterator ip;
        for(ip=s.begin();ip!=s.end();ip++)
        {
            ans1.push_back(*ip);
        }
        
        set<int> s2;
        
        vector<int> ans2;
            for(int i=0;i<nums2.size();i++)
        {
            for(int j=0;j<nums1.size();j++)
            {
                if(nums2[i] == nums1[j])
                {
                    ispresent = true;
                }
            }
            if(ispresent == false)
            {
                s2.insert(nums2[i]);
            }
            ispresent=false;
        }
        
        set<int> :: iterator ip2;
        
        for(ip2=s2.begin();ip2!=s2.end();ip2++)
        {
            ans2.push_back(*ip2);
        }
        
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
    }
};