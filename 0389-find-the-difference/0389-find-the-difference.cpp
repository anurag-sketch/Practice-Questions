class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++)
        {
            mp[t[i]]++;
        }
         unordered_map<char,int> :: iterator ip;
        int mx = INT_MIN;
        for(ip=mp.begin();ip!=mp.end();ip++)
        {
             if(ip->second %2 != 0)
             {
                 return ip->first;
             }
        }
        return s[0];
    }
};