class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        vector<long long> v;
        int test=0;

        while(test<k)
        {
            int mx=INT_MIN;
            int index;
            for(int i=0;i<gifts.size();i++)
         {
              mx=max(mx,gifts[i]);
         }     
            for(int i=0;i<gifts.size();i++)
            {
                if(mx == gifts[i])
                {
                    index=i;
    
                }
                
            }
            gifts[index] = floor(sqrt(gifts[index]));
            test++;
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++)
        {
            sum = sum + gifts[i];
        }
        return sum;
       
        
    }
};