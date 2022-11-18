class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string> mp;
        
        for(int i=0;i<heights.size();i++)
        {
            mp[heights[i]]=names[i];
        }
        
         map<int,string> :: iterator ip;
//         ip=mp.begin();
        
//         for(int i=0;i<names.size();i++)
//         {
//             ip->second = names[i];
//         }
   //     ip=mp.begin();
        vector<string> ans;
        
        for(ip=mp.begin();ip!=mp.end();ip++)
        {
            ans.push_back(ip->second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};