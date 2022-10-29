class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        int mx=INT_MAX/100;
  
        int i=n;
        while(i<mx)
        {
            if(i%2==0 && i%n==0)
            {
                return i;
            }
            i++;
        }
        
        return 0;
    }
};