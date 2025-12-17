#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,choice=0,number,choice1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash[12] = {0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    while(choice==0)
    {
        cout<<"Enter number to find out how many times it appeared in array:- ";
        cin>>number;
        cout<<hash[number]<<endl;
        cout<<"Do u want to do the same thing for another number, if yes press 0 else 1"<<endl;
        cin>>choice1;
        choice=choice1;

    }


    return 0;
}