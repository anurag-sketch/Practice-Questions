class Solution {
public:
    int lengthOfLastWord(string s) {
     	int i = s.size() - 1;

// 		while (!(int(s[i]) >= 97 && int(s[i]) <= 122) || !(int(s[i]) >=65 && int(s[i]) <=90))
// 		{
// 			s.erase(s.begin() + i);
// 			i--;
// 		}
        
        while(s[i] == ' ')
        {
            s.erase(s.begin() + i);
                i--;
        }

		int count = 0;
		bool flag = true;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
			{
				count++;
			}
			else
			{
				break;
			}
		}
		return count;
        
    }
};