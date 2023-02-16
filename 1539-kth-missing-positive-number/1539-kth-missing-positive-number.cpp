class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
//         vector<int> v;
//         for(int i=1;i<=1000;i++) 
//         {
//             v.push_back(i);
//         }
        
//         for(int i=0;i<v.size();i++)
//         {
//             for(int j=0;i<arr.size();j++)
//             {
//                 if(v[i] == arr[j]) 
//                 {
//                     v[i] = -1;
                
//                 }
//             }
//         }
        
//         vector<int> ans(1000);
//         for(int i=0;i<v.size();i++)
//         {
//             if(v[i] != -1) ans.push_back(v[i]);
//         }
//         return ans[k+1];
         int n = arr.size();
    int start = 0, end = n - 1, mid, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int missed = arr[mid] - mid - 1;
        if (missed >= k)
        {
            ans = arr[mid] - (missed - k) - 1;
            end = mid - 1;
        }
        if (missed < k)
        {
            start = mid + 1;
            ans = arr[mid] + k - missed;
        }
    }
    return ans;
        
    }
};