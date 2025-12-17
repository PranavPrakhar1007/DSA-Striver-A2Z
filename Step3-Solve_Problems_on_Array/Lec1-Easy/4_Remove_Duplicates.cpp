//Remove Duplicates in place of sorted array

// here brute force is good for unsorted array too.


#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(int arr[], int n)
{
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    int k = st.size();
    int j = 0;
    for(int it : st)
    {
        arr[j++] = it;
    }
    return k;
}

void Brute_Force(int arr[],int n)
{
    int k =RemoveDuplicates(arr,n);
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Best(int arr[],int n)
{
    int j = 0;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    int k = j;
    for(int i = 0 ;i<=k;i++)
    {
        cout<<arr[i]<<" ";
    }
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