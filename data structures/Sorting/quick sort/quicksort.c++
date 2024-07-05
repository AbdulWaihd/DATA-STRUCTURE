#include <iostream>
using namespace std;
int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first - 1; // for inserting elements less than pivot

    int j = first; // for finding elements less than pivot
    for (; j <= last - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // now here i is pointing towards the last element less than pivot
    // correct position for pivot will be i+1
    swap(arr[i + 1], arr[last]);
    return i + 1;
}

void quicksort(int arr[], int first, int last)
{
    if (first >= last)
    {
        return;
    }

    int pivot = partition(arr, first, last);
    quicksort(arr, first, pivot - 1);
    quicksort(arr, pivot + 1, last);
}

int main()
{

    int arr[] = {20, 12, 35, 16, 18, 30};

    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}