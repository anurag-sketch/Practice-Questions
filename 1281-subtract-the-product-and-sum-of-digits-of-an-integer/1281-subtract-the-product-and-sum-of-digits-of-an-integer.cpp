class Solution {
public:
    int subtractProductAndSum(int number) {
        
        vector<int> ans;
        
        while (number > 0)
{
    int digit = number%10;
    number /= 10;
    ans.push_back(digit);
}
        
        int plus=0;
         int mul=1;
        for(int i=0;i<ans.size();i++)
        {
            plus=plus+ans[i];
            mul=mul*ans[i];
        }
        return (mul-plus);
        
        
        
    }
};