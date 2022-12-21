class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int> ans;
        
        for(int i=0;i<operations.size();i++)
        {
    
            if(operations[i] == "+")
            {
                int x=0;
                x = ans[ans.size()-1] + ans[ans.size()-2];
                ans.push_back(x);
            }
            else if(operations[i] == "C")
            {
                ans.pop_back();
            }
            else if(operations[i] == "D")
            {
                int y ;
             y = 2 * ans[ans.size()-1];
                ans.push_back(y);
            }
            else 
            {
                int n = stoi(operations[i]);
                ans.push_back(n);
            }
        }
        
        int result = 0;
        
        for(int i=0;i<ans.size();i++)
        {
            result = result + ans[i];
        }
        
        return result;
    }
};