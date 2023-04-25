class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> v;
        
        for(int i=1;i<=n;i++)
        {
            if((i%3 == 0) or (i%5 == 0) or (i%7 == 0))
            {
                v.push_back(i);
            }
        }
        
        int sum = 0;
        
        for(int i=0;i<v.size();i++) 
        {
            sum = sum + v[i];
        }
        return sum;
        
    }
};