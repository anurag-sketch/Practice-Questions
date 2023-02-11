class Solution {
public:
          vector<int> v;
         void fun(int x)
        {
             vector<int> a;
            while(x>0)
            {
                int kk;
                kk = x%10;
                a.push_back(kk);
                x = x/10;
            }
             reverse(a.begin(),a.end());
             for(int i=0;i<a.size();i++)
             {
                 v.push_back(a[i]);
             }
             
            return;
        }
        
    vector<int> separateDigits(vector<int>& nums) {
  
        for(int i=0;i<nums.size();i++)
        {
            fun(nums[i]);
        }
        return v;
   
        
        
        
    }
};