class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int count=0;
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
       for(int i=0;i<g.size();i++)
       {
           for(int j=0;j<s.size();j++)
           {
               if(g[i] <= s[j])
               {
                   count++;
                   s[j] = INT_MIN;
                   break;
               }
               
           }
               
       }
        return count;
        
    }
};