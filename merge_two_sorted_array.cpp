#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr1;
	vector<int> arr2;

	int m,n;
	cin>>m>>n;

	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		arr1.push_back(x);
	}

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		arr2.push_back(x);
	}
   int i=0;
   int j=0;
   vector<int> ans;
   while(i<m || j<n)
   {
	   if(arr1[i] < arr2[j])
	   {
           ans.push_back(arr1[i]);
		   i++;
	   } 
	   else if(arr1[i] > arr2[j])
	   {
            ans.push_back(arr2[j]);
			j++;
	   }
	   else
	   {
		ans.push_back(arr1[i]);
		i++;
		j++;
	   }
   }

   for(int i=0;i<ans.size();i++)
   {
	cout<<ans[i]<<" ";
   }

   return 0;

}
