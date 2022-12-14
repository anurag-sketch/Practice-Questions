#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	int size;
	cin>> size;

	for(int i=0;i<size;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}

	int target;
	cin>>target;

	int start=0;
	int end=size-1;
	bool flag=false;
	while(start<=end)
	{
		int mid = (start) + (end-start)/2;
		if(v[mid] == target)
		{
			cout<<target<<endl;
			flag=true;
			break;
		}
		else if(v[mid] > target)
		{
               end =mid-1;
		}
		else
		{
			start = mid+1;
		}
	}

	start = 0;
	end = size-1;
	if(flag==false)
	{
           int mx= INT_MIN;
		   while(start<=end)
		   {
			int mid = (start) + (end-start)/2;
			   if(v[mid] == target)
			   {
				cout<<target<<endl;
				break;
			   }
			   else if(v[mid] >target)
			   {
				end = mid-1;
			   }
			   else
			   {
				start = mid+1;
			   }
			   if(v[mid] < target)
			   {
				mx = max(mx , v[mid]);
			   }
		   }

		   start=0;
		   end=size-1;
		   int mn =INT_MAX;
		    while(start<=end)
		   {
			int mid = (start) + (end-start)/2;
			   if(v[mid] == target)
			   {
				cout<<target<<endl;
				break;
			   }
			   else if(v[mid] >target)
			   {
				end = mid-1;
			   }
			   else
			   {
				start = mid+1;
			   }
			   if(v[mid] > target)
			   {
				mn = min(mn , v[mid]);
			   }
		   }

		   if(abs(target - mx) > abs(target-mn))
		   {
			cout<<mn<<endl;
		   }
		   else
		   {
			cout<<mx<<endl;
		   }

	}
return 0;

}
