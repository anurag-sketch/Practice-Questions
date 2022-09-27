#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int length,int i,int n)
{
     
for(int j=length;j>i;j--)
{
    arr[j]=arr[j-1];
}

arr[i]=n;

length++;
for(int j=0;j<length;j++)
{
    cout<<arr[j]<<endl;
}
    
}





int main()
{
    int arr[10];
    cout<<"Enter the length :"<<endl;
    int length;
    cin>>length;
    
    int i;
    cout<<"Enter the index :"<<endl;
    cin>>i;
    
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    
    insert(arr,length,i,n);
    return 0;
}