class Solution {
public:
    
    
//     int subsetcount(vector<int> arr, int size, int s)
// {

//     int t[size + 1][s + 1];
//     for (int i = 0; i < (size + 1); i++)

//     {
//         for (int j = 0; j < (s + 1); j++)
//         {

//             if (i == 0)
//             {
//                 t[i][j] = 0;
//             }
//             if (j == 0)
//             {
//                 t[i][j] = 1;
//             }
//         }
//     }
//     for (int i = 1; i < (size + 1); i++)
//     {
//         for (int j = 1; j < (s + 1); j++)
//         {
//             if (arr[i - 1] <= j)
//             {
//                 t[i][j] = (t[i - 1][j - arr[i - 1]]) + (t[i - 1][j]);
//             }
//             if (arr[i - 1] > j)
//             {
//                 t[i][j] = t[i - 1][j];
//             }
//         }
//     }
//     return t[size][s];
// }
    
    
    
    
//     int findTargetSumWays(vector<int>& nums, int target)
//     {    
        
//         int sum=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum=sum+nums[i];
//         }
//         int s1;
//         s1=(target+sum)/2;
        
//         int ans;
//         ans=subsetcount(nums,(nums.size()),s1);
//         return ans;
        
//     }
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
	int sum = accumulate(nums.begin(), nums.end(), 0);
	
	//For below if condition, 
	//sum<abs(target), consider test case - nums: [100], target: -200
	//(target+sum) % 2 != 0, consider test case - nums: [7,9,3,8,0,2,4,8,3,9], its sum = 53 and target: 0, there could not be any 26.5 in integer array.
	
	if(sum < abs(target) || (target+sum) %2 != 0) return 0;
	
	//S1 is newTarget
	int newTarget = (sum - target)/2;
	return countSubsetsWithSumTarget(nums, newTarget);
}

//Count subsets with sum S1
int countSubsetsWithSumTarget(vector<int>& a, int target){
	int n= a.size(), w = target;
	int t[n+1][w+1];

	//Initialization
	for(int i=0; i<w+1; i++) t[0][i] = 0;
	for(int j=0; j<n+1; j++) t[j][0] = 1;

	//Knapsack 01
	for(int i=1; i<n+1; i++){
	
	//j starts from 0, becuase 0s are considered valid in this problem, e.g - nums: [0,0,0,0], target: 0, ans = 16
		for(int j=0; j<w+1; j++){
			if(a[i-1] <= j){
				t[i][j] = t[i-1][j-a[i-1]] + t[i-1][j];
			}else{
				t[i][j] = t[i-1][j];
			}
		}
	}
	return t[n][w];
}
};
