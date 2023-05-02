class Solution {
public:
    
    vector<vector<int>> ans;
    
    void solve(int n,int index, int target,vector<int> &temp , vector<int> &arr)
    {
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=index;i<n;i++)
        {
            if(i>index && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            temp.push_back(arr[i]);
            solve(n,i+1,target-arr[i],temp,arr);
            temp.pop_back();
        }
        return;
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        solve(candidates.size(),0,target,temp,candidates);
        return ans;
    }
};