#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
    for(int i =n-1;i>=1;i--)
    {
        int didSwap = 0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0)
        {
            break;
        }

    }
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
    Bubble_Sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}