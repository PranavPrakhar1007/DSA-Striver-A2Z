#include<bits/stdc++.h>
using namespace std;

int Brute_Force(int arr[],int n)
{
    sort(arr,arr + n);
    int sLargest = INT_MIN;
    int Largest = arr[n-1];
    for(int i = n-2;i>=0;i--)
    {
        if(arr[i]>sLargest && arr[i] != Largest)
        {
            sLargest = arr[i];
            break;
        }
    }
    
    return sLargest;
}
int Better(int arr[],int n)
{
    int Largest = arr[0];
    int sLargest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Largest)
        {
            Largest = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>sLargest && arr[i] != Largest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int Best(int arr[],int n)
{
    int i,j;
    int Largest = arr[0];
    int sLargest = INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i]>Largest)
        {
            sLargest = Largest;
            Largest = arr[i];
        }
        if(arr[i]>sLargest && arr[i] != Largest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
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
    cout<<"Enter 1 : for brute force approach.\nEnter 2 : for better approach.\nEnter 3 : for best approach"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<Brute_Force(arr,n);
            break;
        case 2:
            cout<<Better(arr,n);
            break;
        case 3:
            cout<<Best(arr,n);
            break;
        default:
            cout<<"Wrong input!!";            
    }
    return 0;
}