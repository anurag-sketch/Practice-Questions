class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ip;
        
        for(int i=0;i<boxes.size();i++)
        {
            int count=0;
            for(int j =0;j<boxes.size();j++)
            {
               if(i!=j)
               {
                   if(boxes[j] == '1')
                   {
                   count=count+abs(j-i);    
                   }
                   
               }
            }
             ip.push_back(count);
        }
        return ip;
    }
};