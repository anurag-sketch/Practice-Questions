class Solution {
public:
    int maxJump(vector<int>& stones) {
        int ans = INT_MIN;
        if(stones.size() > 2)
        {
              for(int i=0;i<stones.size();i=i+2)
        {
            if(i+2 < stones.size())
            {
                    int x ;
               x = abs(stones[i] - stones[i+2])  ; 
                   ans = max(ans , x);
            }
        
        }
        for(int i=1 ; i<stones.size() ; i = i+2)
        {
            if(i+2 < stones.size())
            {
                int x;
                x = abs(stones[i] - stones[i+2]);
                ans = max(ans , x);
            }
        }
        return ans;
        }
        else
        {
            return stones[1]-stones[0];
        }
      
    }
};