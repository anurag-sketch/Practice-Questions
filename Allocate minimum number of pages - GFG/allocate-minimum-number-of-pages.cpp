//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    
    bool isValid(int arr[] , int mx , int M , int N)
    {
        int people=1;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum = sum + arr[i];
            if(sum > mx )
            {
                people++;
                sum=arr[i];
            }
            if(people>M)
            {
                return false;
            }
        }

            return true;
        
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M > N)
        {
            return -1;
        }
        int start=INT_MIN;
        
        for(int i=0;i<N;i++)
        {
            start=max(start,A[i]);
        }
        
        int end = 0;
        
        for(int i=0;i<N;i++)
        {
            end = end + A[i];
        }
        int ans = INT_MAX;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(isValid(A,mid,M,N) == true)
            {
                ans = min(ans , mid);
                end = mid -1;
            }
            else
            {
                start = mid+1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends