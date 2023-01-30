class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0) return 0;
        else if(n==1 || n==2) return 1;
        
        vector<int> v(n+1);
        v[0]=0;
        v[1]=1;
        v[2]=1;
        
        for(int i=3;i<n+1;i++)
        {
            v[i] = v[i-1] + v[i-2] + v[i-3];
        }
        return v[n];
        
    }
};