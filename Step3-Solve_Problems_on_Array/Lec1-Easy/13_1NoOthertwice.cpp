#include<bits/stdc++.h>
using namespace std;
int Brute_Force(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int counter = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                counter++;
            }
        }
        if(counter == 1)
        {
            return arr[i];
        }
    }
}
int Better1(int arr[],int n)
{
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    int hash[max+1] = {0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<max;i++)
    {
        if(hash[i] == 1)
        {
            return i;
        }
    }
}
int Better2(int arr[], int n)
{
    map<int,int> mpp;
    for(int i=0 ; i<n ; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second == 1)
        {
            return it.first;
        }
    }
}
int Optimal(int arr[], int n)
{
    int XOR = 0;
    for(int i=0;i<n;i++)
    {
        XOR = XOR^arr[i];
    }
    return XOR;
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
    int choice;
    cout<<"Enter 1 : for brute force approach.\nEnter 2 : for better1 approach.\nEnter 3 : for better2 approach\nEnter 4 : for optimal approach"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<Brute_Force(arr,n);
            break;
        case 2:
            cout<<Better1(arr,n);
            break;
        case 3:
            cout<<Better2(arr,n);
            break;
        case 4:
            cout<<Optimal(arr,n);
            break;    
        default:
            cout<<"Wrong input!!";            
    }
    return 0;
}