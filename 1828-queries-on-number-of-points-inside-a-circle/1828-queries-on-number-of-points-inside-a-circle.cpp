class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            float h = queries[i][0];
            float k = queries[i][1];
            float r = queries[i][2];
            float count = 0;
            for(int i=0;i<points.size();i++)
            {
                double distance  = (((points[i][0] - h)*(points[i][0]-h)) + ((points[i][1] - k) * (points[i][1]-k)));
                distance = pow(distance,0.5);
                if(distance <= r)
                {
                    count++;
                }
            }
                ans.push_back(count);
        }
        return ans;
        
    }
};