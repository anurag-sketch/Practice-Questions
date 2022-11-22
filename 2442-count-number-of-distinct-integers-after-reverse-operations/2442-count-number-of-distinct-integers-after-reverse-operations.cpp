class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
    
        vector<int> revarray;
        
        for(int i =0 ;i<nums.size();i++)
        {
            int n = nums[i];
            int reverse=0;
            int rem;
               while(n!=0)    
          {    
             rem=n%10;      
             reverse=reverse*10+rem;    
             n/=10;    
           }    
            revarray.push_back(reverse);
            
        }
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] ++;
        }
        
        for(int i=0;i<revarray.size();i++)
        {
            mp[revarray[i]] ++;
        }
        
        int count=0;
        unordered_map<int,int> :: iterator ip;
        for(ip=mp.begin() ; ip!=mp.end();ip++)
        {
            
            {
                count++;
            }
                
        }
        return count;
        
        
    }
};