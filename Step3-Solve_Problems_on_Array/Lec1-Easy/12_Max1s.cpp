// Count Maximum Consecutive One's in the array
#include<bits/stdc++.h>
using namespace std;
int Max1s(int arr[], int n)
{
    int counter = 0;
    int max1 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            counter++;
            
        }
        else
        {
            counter = 0;
        }
        max1 = max(counter,max1);
    }
    return max1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Max1s(arr,n);
    return 0;
}