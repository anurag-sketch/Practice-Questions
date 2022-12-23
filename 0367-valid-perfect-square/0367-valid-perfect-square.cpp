class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num ==1 || num == 0)
        {
            return true;
        }
        
        long long int a=1;
        
        for(long long int a=1 ;a<=num/2;a++)
        {
           if(a*a == num)
           {
               return true;
           }
        }
        return false;
        
    }
};