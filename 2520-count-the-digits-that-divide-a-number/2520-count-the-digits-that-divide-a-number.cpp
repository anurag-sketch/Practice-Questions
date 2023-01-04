class Solution {
public:
    int countDigits(int num) {
        
        int x = num;
        
        string s = to_string(num);
        int count = 0;
        
//         unordered_map<char,int> mp;
        
//         for(int i=0;i<s.size();i++)
//         {
//             mp[s[i]] ++;
//         }
        
//         unordered_map<char,int> :: iterator ip;
        
//         for(ip=mp.begin();ip!=mp.end();ip++)
//         {
//             int y = (ip->first) - '0';
//             if(x % y  == 0)
//             {
//                 count++;
//             }
//         }
        
        for(int i=0;i<s.size();i++)
        {
            int y = (s[i]) - '0';
            if(x % y == 0)
            {
                count++;
            }
        }
        return count;
        
    }
};