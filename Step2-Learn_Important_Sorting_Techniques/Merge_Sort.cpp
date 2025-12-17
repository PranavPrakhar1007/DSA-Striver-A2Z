#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &arr,int low,int mid,int high)
{
    vector<int> temp;
    int left = low, right = mid+1;
    
    while(left<=mid && right<=high)
    {
        
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
            
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i] = temp[i-low];
    }
}
void Merge_Sort(vector<int> &arr, int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid = (low+high)/2;
    Merge_Sort(arr,low,mid);
    Merge_Sort(arr,mid+1,high);
    Merge(arr,low,mid,high);
}
int main()
{
    int n,low,high;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    low=0;
    high=n-1;
    Merge_Sort(arr,low,high);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}