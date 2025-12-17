#include<bits/stdc++.h>
using namespace std;
void Recursive_Bubble_Sort(int arr[],int n)
{
    if(n==1) return;
    int didswap = 0;
    for(int i=0;i<n-1;i++ )
    {
        
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            didswap =1;
        }
        
    }
    
    if(didswap==0) return;
    
    Recursive_Bubble_Sort(arr,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    Recursive_Bubble_Sort(arr,n);
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}