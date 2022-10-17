//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
  
  
  
    int LCS(string a,string b)
    {
        
        int si=a.length();
        int ki=b.length();
        int t[si+1][ki+1];
        
        for(int i=0;i<si+1;i++)
        {
            for(int j=0;j<ki+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<si+1;i++)
        {
            for(int j=1;j<ki+1;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    t[i][j]=1 + t[i-1][j-1];
                }
                else
                {
                    t[i][j]= max((t[i-1][j]) , (t[i][j-1]) );
                }
            }
        }
        return t[si][ki];
        
        
    }
  
  
    int longestPalinSubseq(string s) {
        //code here
        
        
            string rev;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            rev.push_back(s[i]);
        }
        
        int ans;
        ans=LCS(s,rev);
        return ans;
        
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends