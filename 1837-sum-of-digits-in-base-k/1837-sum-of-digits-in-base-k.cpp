class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        
        while(n>0)
        {
            int x;
            x = (n%k);
            ans = x + ans;
            n = n/k;
        }
        
        return ans;
        
        
    }
};