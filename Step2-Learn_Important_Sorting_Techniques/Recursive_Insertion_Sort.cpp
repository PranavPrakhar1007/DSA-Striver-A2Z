#include<bits/stdc++.h>
using namespace std;
void Recursive_Insertion_Sort(int arr[],int i,int n)
{
    if (i==n) return;
    int j = i;
    while(j>0 && arr[j]<arr[j-1])
    {
        swap(arr[j],arr[j-1]);
        j--;
    }
    Recursive_Insertion_Sort(arr,i+1,n);
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
    Recursive_Insertion_Sort(arr,0,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}