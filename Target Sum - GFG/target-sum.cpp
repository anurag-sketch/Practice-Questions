//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  
//   int DP(vector<int>&A , int target, int s1)
//   {
      
//       int n=A.size();
//       int t[n+1][s1+1];
      
//       for(int i=0;i<n+1;i++)
//       {
//           for(int j=0;j<s1+1;j++)
//           {
//               if(i==0)
//               {
//                   t[i][j]=0;
//               }
//               if(j==0)
//               {
//                   t[i][j]=1;
//               }
//           }
//       }
      
//       for(int i=1;i<n+1;i++)
//       {
//           for(int j=1;j<s1+1;j++)
//           {
//               if(A[i-1]<=j)
//               {
//                   t[i][j]=t[i-1][j-A[i-1]] + t[i-1][j];
//               }
//               else
//               {
//                   t[i][j]=t[i-1][j];
//               }
//           }
//       }
      
//       return t[n][s1];
      
//   }
  
   int subsetcount(vector<int> arr, int size, int s)
{

    int t[size + 1][s + 1];
    for (int i = 0; i < (size + 1); i++)

    {
        for (int j = 0; j < (s + 1); j++)
        {

            if (i == 0)
            {
                t[i][j] = 0;
            }
            if (j == 0)
            {
                t[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < (size + 1); i++)
    {
        for (int j = 0; j < (s + 1); j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = (t[i - 1][j - arr[i - 1]]) + (t[i - 1][j]);
            }
            if (arr[i - 1] > j)
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[size][s];
}
   
   
  
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        
        int diff=0;
        for(int i=0;i<A.size();i++)
        {
            diff=A[i]+diff;
        }
    
      if(abs(target)>diff || ((target+diff) % 2 != 0)){
            return 0;
        }
        int s1;
        
        s1=(target+diff)/2;
        
        int ans;
        ans=subsetcount(A,A.size(),s1);
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends