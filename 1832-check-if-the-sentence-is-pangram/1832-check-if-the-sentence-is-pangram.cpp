class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int arr[26] = {0};
      
        for(int i=0;i<sentence.size();i++)
        {
          arr[int(sentence[i])-97]++;
        }
        
        int i=0;
        while(i<26)
        {
            if(arr[i] == 0)
            {
                return false;
            }
            i++;
        }
        
        return true;
        
        
     
        
    }
};