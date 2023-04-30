//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

vector<int> v;

void ms (int index,int sum,vector<int> &temp, vector<int> &num ,int size)
{
    
    if(index == size)
    {
        v.push_back(sum);
        return;
    }
    
    ms(index+1,sum+num[index],temp,num,size);
    ms(index+1,sum,temp,num,size);
    
    return;
    
}


    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> temp;
        
        ms(0,0,temp,arr,N);
        
        sort(v.begin(),v.end());
        
        
        return v;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends