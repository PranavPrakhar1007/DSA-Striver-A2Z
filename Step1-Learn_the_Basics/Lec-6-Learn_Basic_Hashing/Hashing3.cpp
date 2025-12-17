#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,numbers,no;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;  
    }
    cin>>numbers;
    while(numbers--)
    {
        cin>>no;
        cout<<mpp[no];
    }

    return 0;   // Time complexity :- O(N) + O(N)*O(1)  but if we used map it would be O(N) + O(N)*O(log(n))
}