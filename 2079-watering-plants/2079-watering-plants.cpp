class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int steps=0;
        int count=0;
        
        int cap=capacity;
    
        for(int i=0;i<plants.size();i++)
        {
            count++; 
            if(capacity>=plants[i])
            {
                capacity=capacity-plants[i];
                steps++;
            }
             
            
           else if(capacity<plants[i])
            {
               
                steps=steps + (count-1) + count;
                 capacity=cap;
                 capacity=capacity-plants[i];
           }
        
            
        }
        return steps;
        
    }
};