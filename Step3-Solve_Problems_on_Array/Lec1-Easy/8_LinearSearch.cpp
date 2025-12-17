#include<bits/stdc++.h>
using namespace std;
int LinSearch(int arr[], int n, int value)
{
    int index = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] ==  value)
        {
            index = i;
            break;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];

    }
    int value;
    cin>>value;
    cout<<LinSearch(arr,n,value);
    return 0;

}