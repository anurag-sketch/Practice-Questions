class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int a= (0.25) * (arr.size());
        int mx=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            
            mx=max(mx,arr[i]);
        }
        
        int ans[mx+1];
        int i=0;
        for(int i=0;i<mx+1 ;i++)
        {
            ans[i]=0;
        }
        i=0;
        while(i<arr.size())
        {
            ans[arr[i]]++;
            i++;
        }
        i=0;
        while(i< mx + 1)
        {
            if(ans[i] > a)
            {
                return i;
            }
            i++;
        }
        return -1;
        
        
        
    }
};