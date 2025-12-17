//Union of Two Sorted Arrays

#include<bits/stdc++.h>
using namespace std;
void Brute_Force(int arr1[], int arr2[],int n1,int n2)
{
    set<int> st;
    vector<int> unio;
    for(int i=0;i<n1;i++)
    {
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        st.insert(arr2[i]);
    }
    for(int it : st)
    {
        unio.push_back(it);
    }
    for(int it : unio)
    {
        cout<<it<<" ";
    }
}
void Best(int arr1[], int arr2[], int n1, int n2)
{
    int i,j;
    i=1;
    j=0;
    vector<int> unio;
    unio.emplace_back(arr1[0]);
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(unio.back() != arr1[i])
            {
                unio.emplace_back(arr1[i]);
                
            }
            i++;
        }
        else
        {
            if(unio.back() != arr2[j])
            {
                unio.emplace_back(arr2[j]);
                
            }
            j++;
        }
    }
    while(i<n1)
    {
        if(unio.back() != arr1[i])
        {
            unio.emplace_back(arr1[i]);
            
        }
        i++;
    }
    while(j<n1)
    {
        if(unio.back() != arr2[j])
        {
            unio.emplace_back(arr2[j]);
            
        }
        j++;
    }
    for(int it : unio)
    {
        cout<<it<<" ";
    }
}
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i =0;i<n1;i++)
    {
        cin>>arr1[i];

    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i =0;i<n2;i++)
    {
        cin>>arr2[i];

    }

    int choice;
    cout<<"Enter 1 : for brute force approach.\nEnter 2 : for best approach"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            Brute_Force(arr1,arr2,n1,n2);
            break;
        
        case 2:
            Best(arr1,arr2,n1,n2);
            break;
        default:
            cout<<"Wrong input!!";            
    }
    return 0;
}