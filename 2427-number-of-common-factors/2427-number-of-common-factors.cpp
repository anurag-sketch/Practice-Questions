class Solution {
public:
    int commonFactors(int a, int b) {
        
        int count = 0;
        int i=1;
        int x = max(a,b);
        while(i<=x)
              
        {
            if((a%i==0) && (b%i==0))
            {
                count++;
            }
            i++;
            
        }
        return count;
        
    }
};