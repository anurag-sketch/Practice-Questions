class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
//         map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]] ++;
//         }
        
//         map<int,int> ::  iterator ip;
//         vector<int> v;
//         for(ip=mp.begin();ip!=mp.end();ip++)
//         {
//             v.push_back(ip->first);
//         }
        
//         sort(v.begin(),v.end());
//         int si=v.size();
        
//     return (v[si-1]*v[si-2])-(v[0]*v[1]);
        
    
      sort(nums.begin() , nums.end());
      int pro=1;
        int i=0;
        int j=nums.size()-1;
        int mx=INT_MIN;
        while(i<j)
        {
            pro = (nums[j] * nums[j-1]) - (nums[i] * nums[i+1]);
            mx=max(mx,pro);
            i++;
            j--;
        }
        return mx;
        
    }
};