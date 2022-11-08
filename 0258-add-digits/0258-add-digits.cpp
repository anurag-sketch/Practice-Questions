class Solution {
public:
    int addDigits(int num) {
     
        int k,p;
        while(num>0)
        {
            k=(num/10);
            p=(num%10);
            if(k+p < 10)
            {
                return k+p;
            }
          num=k+p;
            
        }
        
        return  0;
        
        
    }
};