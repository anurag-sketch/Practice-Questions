class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        
        if(salary.size()>3)
        {
               sort(salary.begin(),salary.end());
        
        for(int i=1;i<salary.size()-1;i++)
        {
            ans = ans + salary[i];
        }
        return (ans/(salary.size()-2));   
        }
        else
        {
            sort(salary.begin(),salary.end());
            double ans = salary[1];
            return ans;
        }
  
        
    }
};