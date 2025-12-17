#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[], int low, int high)
{
    int i = low, j = high;
    int pivt = high;
    while (i < j)
    {
        while ( i <= high - 1 && arr[i] < arr[pivt])
        {
            i++;
        }
        while (j >= low + 1 && arr[j] > arr[pivt])
        {
            j--;
        }
        if (i > j)
        {
            break;
        }
        swap(arr[i], arr[j]);
    }
    swap(arr[pivt], arr[j]);
    return j;
}
void Quick_Sort(int arr[], int low, int high)
{
    if (low > high)
        return;

    int pivoted_index = pivot(arr, low, high);
    Quick_Sort(arr, low, pivoted_index - 1);
    Quick_Sort(arr, pivoted_index + 1, high);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Quick_Sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}