//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    
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
    
    
    
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string text1, string text2)
    {
        // your code here
        
        
          int a=text1.size();
        int b=text2.size();
   
        int ans=dp(text1,text2,x,y);
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends