#include<bits/stdc++.h>
using namespace std;
int Solution1(int arr[], int n, int k)
{
    int len = 0;
    for(int i = 0;i<n ;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k = i;k<=j;k++ )
            {
                sum+=arr[k];
            }
            if(k == sum)
            {
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int Solution2(int arr[], int n, int k)
{
    int len = 0;
    for(int i = 0;i<n ;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            
            sum += arr[j];
            if(k == sum)
            {
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int Solution3(int arr[], int n, int k)
{
    int sum = 0;
    int maxLen = 0;
    map<int,int> mpp;
    for(int i = 0;i<n;i++)
    {
        sum+=arr[i];
        if(sum == k)
        {
            maxLen = max(maxLen,i+1);
        }
        int rem = sum - k;
        if(mpp.find(rem) != mpp.end())
        {
            maxLen = max(maxLen, i - mpp[rem]);
        }
        if(mpp.find(sum) != mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return maxLen;

}
int Solution4(int arr[], int n, int k)
{

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
    int k ;
    cin>>k;
    int choice;
    cout<<"Enter 1 : for brute force approach.\nEnter 2 : for better1 approach.\nEnter 3 : for better2 approach\nEnter 4 : for optimal approach"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<Solution1(arr,n,k);
            break;
        case 2:
            cout<<Solution2(arr,n,k);
            break;
        case 3:
            cout<<Solution3(arr,n,k);
            break;
        case 4:
            cout<<Solution4(arr,n,k);
            break;    
        default:
            cout<<"Wrong input!!";            
    }
    return 0;
}