class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        // bool one=false;
        // bool two = false;
        // for(int i=0;i<ranges.size();i++)
        // {
        //     if(ranges[i][0] <= left) one = true;
        //     if(ranges[i][1] >= right) two=true;
        // }
        // return (one & two)
        vector<int> v;
        
        for(int i=left;i<=right;i++)
        {
            v.push_back(i);
        }
        vector<int> comp;
        for(int i=0;i<ranges.size();i++)
        {
            for(int j=ranges[i][0];j<=ranges[i][1];j++)
            {
                comp.push_back(j);
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            bool present = false;
            for(int j=0;j<comp.size();j++)
            {
                if(v[i] == comp[j]) present=true;
            }
            if(present == false) return false;
        }
        return true;
        
    }
};