class Solution {
public:
    char repeatedCharacter(string s) {
        
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] == 2)
            {
                return s[i];
            }
        }
        
//         unordered_map<char,int> :: iterator ip;
        
//         for(ip=mp.begin() ; ip!=mp.end() ;ip++)
//         {
//             if(ip->second == 2)
//             {
//                 return ip->first;
//             }
//         }
        return 'a';
        
    }
};