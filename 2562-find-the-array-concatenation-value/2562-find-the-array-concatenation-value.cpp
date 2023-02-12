class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        if(nums.size()%2 == 0)
        {
               long long  sum=0;
        
        int i=0;
        vector<long long>v;
        int j=nums.size()-1;
        while(i<=j)
        {
            string x=to_string(nums[i]);
            string y=to_string(nums[j]);
            string ans="";
            ans = x + y;
            int k=stoi(ans);
            v.push_back(k);
            i++;
            j--;
            
        }
            for(int i=0;i<v.size();i++) sum=sum+v[i];
            return sum;
        }
        else
        {
          long long  sum=0;
        
        int i=0;
        vector<long long>v;
        int j=nums.size()-1;
        while(i<j)
        {
            string x=to_string(nums[i]);
            string y=to_string(nums[j]);
            string ans="";
            ans = x + y;
            int k= stoi(ans);
            v.push_back(k);
            i++;
            j--;
            
        }
            for(int i=0;i<v.size();i++) sum=sum+v[i];
            return sum+(nums[(nums.size())/2]);
        }
     
    }
};