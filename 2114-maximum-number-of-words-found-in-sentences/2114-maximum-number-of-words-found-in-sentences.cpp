class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int count=0;
        int mx=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j] == ' ')
                {
                    count++;
                }
            }
            mx=max(mx,count);
            count=0;
        }
        return mx+1;
        
    }
};