class Solution {
public:
    bool isThree(int n) {
        int count=0;
        int i=1;
        while(i<=n)
        {
            if(n%i ==0)
            {
                 count++;
            }
            i++;
        }
        if(count==3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};