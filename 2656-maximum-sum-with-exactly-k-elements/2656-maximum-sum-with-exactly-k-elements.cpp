class Solution {
public:
    int maximizeSum(vector<int>& n, int k) {
          int m = *max_element(begin(n), end(n));
    return k * m + k * (k - 1) / 2;    
    }
};