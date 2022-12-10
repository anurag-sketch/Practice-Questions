class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=needle.size();
        
        for(int i=0;i<haystack.size();i++)
        {
            
            if(i + (needle.size() - 1) < haystack.size())
            {
                string k;
                k = haystack.substr(i,n);
                if(k == needle)
                {
                    return i;
                }
            }
            
        }
        return -1;
        
    }
};