class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
        int m=s.size();
        int n=t.size();
        
      int k[m+1][n+1];
        
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    
                {
                    k[i][j]=0;
                }
            }
        }
        
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    k[i][j] = 1 + k[i-1][j-1];
                }
                else
                {
                    k[i][j] = max(k[i-1][j] , k[i][j-1]);
                }
            }
        }
        
        if(k[m][n] == m )
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};