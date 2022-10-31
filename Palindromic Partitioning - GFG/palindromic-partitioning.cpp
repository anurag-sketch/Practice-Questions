//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

int  t[1001][1001];
bool isPalindrome(string s,int i,int j)
{
    
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
        
    }
    return true;
    
}



  int solve(string s,int i,int j)
  {
      if(i>=j)
      {
          return 0;
      }
       if(t[i][j] != -1)
      {
          return t[i][j];
      }
      if(isPalindrome(s,i,j) == true)
      {
          return 0;
      }
     
      
      int ans=INT_MAX;
      
      for(int k=i;k<=j-1;k++)
      {
          int temp;
          int left,right;
          
          if(t[i][k] != -1)
          {
               left=t[i][k];
          }
          else
          {
              left=solve(s,i,k);
              t[i][k]=left;
          }
          if(t[k+1][j] != -1)
          {
              right=t[k+1][j];
          }
          else
          {
              right=solve(s,k+1,j);
              t[k+1][j]=right;
          }
          
          temp=left + right + 1;
          ans=min(ans,temp);
      }
      return t[i][j]=ans;
  }


    int palindromicPartition(string str)
    {
        // code here
        int i=0;
        int j=str.size()-1;
        int kam;
        memset(t,-1,sizeof(t));
        kam=solve(str,i,j);
        return kam;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends