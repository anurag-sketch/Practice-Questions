class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
         if (coordinates.size() <= 2) // two points are always on a straight line
            return true;
        
        // find gradient
        float x = (coordinates[0][0] - coordinates[1][0]);
        float y = (coordinates[0][1] - coordinates[1][1]);
        
        for (int i=2; i<coordinates.size(); i++)
        {
            if (x == 0)
                if ((coordinates[i][0] - coordinates[i-1][0]) != 0)
                    return false;
            
            if (y == 0)
                if ((coordinates[i][1] - coordinates[i-1][1]) != 0)
                    return false;
            
            float g = y*1.0 / x;
            if ((x != 0) && (y!=0))
                if (((coordinates[i][1] - coordinates[i-1][1])*1.0 / (coordinates[i][0] - coordinates[i-1][0])*1.0) != g)
                    return false;  
        }
        return true;
        
    }
};