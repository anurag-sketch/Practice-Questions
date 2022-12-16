class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jump=0;
        int pos=0;
        int dest=0;
        
        for(int i =0;i<nums.size()-1;i++)
        {
            dest=max(dest,i+nums[i]);
            if(pos==i)
            {
                pos=dest;
                jump++;
            }
        }
        return jump;
        
    }
};