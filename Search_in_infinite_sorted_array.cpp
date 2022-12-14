/************************************************************

    Use get function that returns the value at index i
    in the infinite sorted binary array.

    get(i)
    {

    }
    

************************************************************/

long long firstOne()
{
    // Write your code here.
    long long int start=0;
    long long int end=1;
    while(get(end)<1)
    {
        start=end;
        end = 2*end;
    }
    long long int ans;
    while(start<=end)
    {
        long long int mid =(start) + (end-start)/2;
        if(get(mid) == 1)
        {
            ans = mid;
           end = mid-1;
        }
        else if(get(mid) > 1)
        {
            end = mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
    
}
