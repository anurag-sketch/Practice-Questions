class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int>a;
        
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            if(i+1<(nums.size()))
            {
                for(int j=i+1;j<nums.size();j++)
            {
                sum=sum+nums[j];
            }
                a.push_back(sum);
            }
            else if(i == nums.size()-1) a.push_back(0);
        }
        
        vector<int>b;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            int sum=0;
            if(i!=0)
            {
                for(int j=i-1;j>=0;j--) sum=sum+nums[j];
                
                b.push_back(sum);
            }
            else if(i == 0) b.push_back(0);
        }
        reverse(b.begin(),b.end());
        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            ans.push_back(abs(a[i] - b[i]));
        }
        return ans;
        
        
        
        
    }
};