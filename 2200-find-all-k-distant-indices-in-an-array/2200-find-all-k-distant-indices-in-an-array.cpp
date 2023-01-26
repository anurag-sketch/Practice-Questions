class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> v;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                
                {
                    if(abs(i-j) <=k && nums[j] ==key )  s.insert(i);
                }
            }
        }
        set<int> :: iterator itr;
        for(itr=s.begin();itr!=s.end();itr++) 
        {
            v.push_back(*itr);
        }
        return v;
    }
};