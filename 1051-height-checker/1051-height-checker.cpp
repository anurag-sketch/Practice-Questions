class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> k = heights;
        sort(k.begin(),k.end());
        int count = 0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i] != k[i]) count++;
        }
        return count;
    }
};