// Find the missing number in an array

#include<bits/stdc++.h>
using namespace std;
int Brute_Force(int arr[], int n)
{
    
    for(int i = 1;i<=n;i++)
    {
        int found  = 0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }
             
        }
        if(found == 0)
        {
            
            return i;
        }
    }

    return -1;
}

int Better(int arr[] , int n)
{
    int hash[n+1] = {0};
    for(int i=0;i<n-1;i++)
    {
      hash[arr[i]]++;
    }
    for(int i =1 ; i<n+1;i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return -1;

}
int Optimal1(int arr[], int n)
{
    int sum = n*(n+1)/2;
    int sum1=0;
    for(int i=0;i<n-1;i++)
    {
        sum1+=arr[i];
    }
    return sum - sum1;
}

int Optimal2(int arr[], int n)
{
    int XOR1 , XOR2;
    XOR1 = XOR2 =0;
    for(int i =1;i<=n;i++)
    {
        XOR1 = XOR1^i;
    }
    for(int i=0;i<n-1;i++)
    {
        XOR2 = XOR2^arr[i];
    }
    return XOR1^XOR2;

}
int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];

    }
    int choice;
    cout<<"Enter 1 : for brute force approach.\nEnter 2 : for better approach.\nEnter 3 : for optimal1 approach\nEnter 4 : for optimal2 approach"<<endl;
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
            cout<<Optimal1(arr,n);
            break;
        case 4:
            cout<<Optimal2(arr,n);
            break;    
        default:
            cout<<"Wrong input!!";            
    }
    return 0;
}
