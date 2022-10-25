//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  
     int ans(int arr[], vector<int> values, int range ,int size)
    {
        int t[size+1][range+1];
        
        for(int i=0;i<size+1;i++)
        {
            for(int j=0;j<range+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=false;
                }
                if(j==0)
                {
                    t[i][j]=true;
                }
            }
        }
        
        for(int i=1;i<size+1;i++)
        {
            for(int j=1;j<range+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=(t[i-1][j-arr[i-1]]) || (t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        int i=size;
        int j=0;
        while(j<=(range/2))
        {
            
            if(t[i][j]==true)
            {
                values.push_back(j);
            }
            j++;
            
        }
        
        int mx=INT_MAX;
        for(int i=0;i<values.size();i++)
        {
            mx=min(mx,(range-2*values[i]));
        }
        
        return mx;
        
    }
  
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int range=0;
	    
	   
	    
	    for(int i=0;i<n;i++)
	    {
	        range=range+arr[i];
	    }
	    int kk;
	    vector<int> xx;
	    kk=ans(arr,xx,range,n);
	    return kk;
	    
	 
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends