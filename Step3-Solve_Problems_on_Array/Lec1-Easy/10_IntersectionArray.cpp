// Intersection of 2 Sorted arrays
#include<bits/stdc++.h>
using namespace std;
void Brute_Force(int arr1[], int arr2[],int n1 , int n2)
{
    int VS[n2] = {0};
    vector<int> intersect;
    
    for(int i =0;i<n1;i++)
    {
        for(int j =0;j<n2;j++)
        {
            if(arr1[i] == arr2[j] && VS[j] == 0)
            {
                intersect.push_back(arr1[i]);
                VS[j]=1;
                break;
            }

        }
    }
    for(int it : intersect)
    {
        cout<<it<<" ";
    }

}
void Best(int arr1[], int arr2[],int n1, int n2)
{
    int i,j;
    i=j=0;
    vector<int> intersect;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            intersect.emplace_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int it : intersect)
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