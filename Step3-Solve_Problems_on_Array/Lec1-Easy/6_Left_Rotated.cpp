//Left rotate array by d elements

#include<bits/stdc++.h>
using namespace std;
void Brute_Force(int arr[],int n)
{
    int d;
    cout<<"Enter d:- ";
    cin>>d;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i = n-d;i<n;i++)
    {
        arr[i] = temp[i-(n-d)];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
void Best(int arr[],int n)
{
    int d;
    cout<<"Enter d:- ";
    cin>>d;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
