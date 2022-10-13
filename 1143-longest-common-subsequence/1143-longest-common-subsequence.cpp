class Solution {
public:
    

    
//     int dp(string x,string y,int m,int n)
//     {
//         if(m==0 || n==0)
//         {
//             return 0;
//         }
//         if(t[m][n]!=-1)
//         {
//           return t[m][n];   
//         }
//         if(x[m-1]==y[n-1])
//         {
//             return t[m][n]=1+dp(x,y,m-1,n-1);
//         }
//         else
//         {
//             return t[m][n]=max(dp(x,y,m-1,n),dp(x,y,m,n-1));
//         }
//     }
    
    int dp(string x,string y,int m,int n)
    {
        
        int t[m+1][n+1];

        for(int i=0;i<(m+1);i++)
        {
            for(int j=0;j<(n+1);j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<(m+1);i++)
        {
            for(int j=1;j<(n+1);j++)
            {
                if(x[i-1]==y[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        //Recursive solution
        int x=text1.size();
        int y=text2.size();
   
        int ans=dp(text1,text2,x,y);
        return ans;
        
        
    }
};