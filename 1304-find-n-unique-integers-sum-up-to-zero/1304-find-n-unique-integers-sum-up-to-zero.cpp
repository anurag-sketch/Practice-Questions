class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        
        int i =1;
        if(n%2 == 0)
        {
             while(i<=n)
        {
            ans.push_back(i);
            ans.push_back(-1*i);
                 i=i+2;
        }
        }
       else
            {
                int x = n-1;
                int j=1;
                while(j<=x)
                {
                       ans.push_back(j);
                     ans.push_back(-1*j);
                      j=j+2;
                }
                ans.push_back(0);
            }
        
        sort(ans.begin() , ans.end());
        return ans;
       
    }
};