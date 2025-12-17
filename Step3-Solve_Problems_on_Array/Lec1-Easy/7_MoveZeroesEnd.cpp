//Move all Zeros to the end of the array
#include<bits/stdc++.h>
using namespace std;
void Brute_Force(int arr[],int n)
{
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        arr[i] = temp[i];
    }
    for(int i = temp.size();i<n;i++)
    {
        arr[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Best(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0 )
        {
            j = i;
            break;
        }
    }
    if(j != -1)
    {
        for(int i = j+1;i<n;i++)
        {
            if(arr[i]!=0)
            {
                swap(arr[j],arr[i]);
                j++;
            }

        }
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    else
    {
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
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
    int choice;
    cout<<"Enter 1 : for brute force approach.\nEnter 2 : for best approach"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            Brute_Force(arr,n);
            break;
        
        case 2:
            Best(arr,n);
            break;
        default:
            cout<<"Wrong input!!";            
    }
    return 0;
}