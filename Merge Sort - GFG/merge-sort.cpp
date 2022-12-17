//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
   long long int b[100009];
    void merge(int arr[], int l, int m, int r)
    {
       long long  int i=l;
      long long int j = m+1;
        int k=l;
        
        while(i<=m && j<=r)
        {
            if(arr[i] < arr[j])
            {
              b[k] = arr[i];
            i++;
            }
            else
            {
                b[k]=arr[j];
                j++;
             }
             k++;
        }
        if(i>m)
        {
            while(j<=r)
            {
                b[k] = arr[j];
                k++;
                j++;
            }
        }
        else
        {
            while(i<=m)
            {
                b[k]=arr[i];
                k++;
                i++;
            }
        }
        return;
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int mid = (l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
             for(int i=l;i<=r;i++)
        {
            arr[i] = b[i];
        }
        
        }
       
        return ;
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends