

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min_indx = INT_MAX,max_indx = INT_MIN,lowest ,highest;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(min_indx>it.second)
        {
            lowest = it.first;
            min_indx = it.second;
        }
        if(max_indx<it.second)
        {
            highest = it.first;
            max_indx = it.second;
        }

    }
    cout<<highest<<endl<<lowest;


    return 0;
}