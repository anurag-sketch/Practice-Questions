//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,arr[i]);
        }
        
        int krr[mx+1];
        
        for(int i=0;i<mx+1;i++)
        {
            krr[i]=0;
        }
        
        int j=0;
        while(j<n)
        {
            krr[arr[j]]++;
            j++;
        }
        
        vector<int> ans;
        for(int i=0;i<mx+1;i++)
        {
            if(krr[i]>1)
            {
                ans.push_back(i);
            }
        }
        vector<int> ks;
        ks.push_back(-1);
        if(ans.size()==0)
        {
            return ks;
        }
        else
        {
            return ans;
        }
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends