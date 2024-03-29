class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
          int max = 0, earliest_year;
        vector<int> years(101);
        for(vector<int> log : logs){
            for(int year = log[0]; year< log[1]; year++)
                years[year - 1950]++;
        }
        for(int year=0 ; year <= 100; year++){
            if(years[year] > max){
                max = years[year] ;
                earliest_year = year;
            }            
        }
        return earliest_year + 1950;
        
    }
};