class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        double kelving = celsius + 273.15;
        double f = (celsius) * (1.80) + 32.00;
        
        vector<double> v;
        v.push_back(kelving);
        v.push_back(f);
        
        return v;
        
    }
};