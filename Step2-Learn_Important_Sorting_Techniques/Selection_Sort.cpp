#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int mini;
     for (int i = 0; i < n - 1; i++)
    {
        mini = i;

        for (int j = i; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
                
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    SelectionSort(arr,n);
   
    cout<<"Sorted array is:-\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}