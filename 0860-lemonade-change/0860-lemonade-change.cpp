class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
//         sort(bills.begin(),bills.end());
//         int five=0;
//         int ten=0;
//         int twenty=0;
//         for(int i=0;i<bills.size();i++)
//         {
//             if(bills[i] == 5) five++;
//             else if(bills[i] == 10) ten++;
//             else twenty++;
            
//             if(bills[i] == 10) 
//             {
//                 if(five>0) five--;    
//                 else return false;
//                 ten++;
//             }
//             if(bills[i] == 20)
//             {
//                 if(five>=3) five--;
//                 else if(five>=1 && ten>=1) 
//                 {
//                    five--;
//                     ten--;
//                 }
//                 else return false;
                
//             }
    
//         }
//         return true;
      int five = 0, ten = 0;
        for (int i : bills) {
            if (i == 5) five++;
            else if (i == 10) five--, ten++;
            else if (ten > 0) ten--, five--;
            else five -= 3;
            if (five < 0) return false;
        }
        return true;
        
        
        
    }
};