class Solution {
public:
    bool rotateString(string s, string goal) {
       
        reverse(s.begin() , s.end());
        reverse(goal.begin(),goal.end());
        
        vector<char> ans(s.size());
        
        
        int times = 0;
        while(times <= s.size())
        {
            for(int i=0;i<s.size();i++)
            {
                ans[(i+times)%s.size()] = s[i];
                
            }
            string k="";
            for(int i=0;i<ans.size();i++)
            {
                k = k + ans[i];
            }

            if(k == goal)
            {
                return true;
            }
            times++;
        }
        return false;
        
    }
};