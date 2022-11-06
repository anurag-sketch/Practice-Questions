class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string ans=s ;
        
        for(int i=0;i<indices.size();i++)
        {
            int x=indices[i];
             ans[x]=s[i];
        }
        
        return ans;
        
        
    }
};