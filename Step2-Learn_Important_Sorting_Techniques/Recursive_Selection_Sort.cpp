#include<bits/stdc++.h>
using namespace std;
void Recursive_Selection_Sort(int arr[], int i , int n)
{
    if(i==n) return ;
    int j=i;
    int min = arr[j];
    int mini = i;
    for(j;j<n;j++)
    {
        if(arr[j]<min)
        {
            min = arr[j];
            mini = j;
        }

    }
    swap(arr[mini],arr[i]);
    Recursive_Selection_Sort(arr,i+1,n);
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
    Recursive_Selection_Sort(arr,0,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}