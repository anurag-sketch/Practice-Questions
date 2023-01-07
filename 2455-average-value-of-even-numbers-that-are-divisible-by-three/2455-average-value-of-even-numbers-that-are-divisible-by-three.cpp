class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int val=0;
        int count=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2 == 0 && nums[i]%3==0)
            {
                flag=true;
                val=val+nums[i];
                count++;
            }
        }
        if(flag==true)
        return val/count;
        else
            return 0;
    }
};