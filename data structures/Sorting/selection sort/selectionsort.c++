#include <iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        // Finding the minimum element in the unsorted part of the array
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_idx])
            {
                min_idx = j;
            }
        }
        // Placing the minimum element at the beginning of the unsorted part
        if (i != min_idx)
        {
            swap(v[i], v[min_idx]);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    selectionsort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
/*Consider the array [5, 3, 8, 4, 2]:

Step-by-Step Walkthrough
Iteration 1 (i = 0):
Initial Array: [5, 3, 8, 4, 2]
Starting with i = 0:
Assume min_idx = 0 (5 is the minimum)
Inner Loop:
Compare arr[1] (3) with arr[0] (5):
3 < 5, so update min_idx = 1
Compare arr[2] (8) with arr[1] (3):
8 > 3, no update
Compare arr[3] (4) with arr[1] (3):
4 > 3, no update
Compare arr[4] (2) with arr[1] (3):
2 < 3, so update min_idx = 4
Swap arr[0] (5) with arr[4] (2):
Array becomes: [2, 3, 8, 4, 5]
Iteration 2 (i = 1):
Array: [2, 3, 8, 4, 5]
Starting with i = 1:
Assume min_idx = 1 (3 is the minimum)
Inner Loop:
Compare arr[2] (8) with arr[1] (3):
8 > 3, no update
Compare arr[3] (4) with arr[1] (3):
4 > 3, no update
Compare arr[4] (5) with arr[1] (3):
5 > 3, no update
Swap arr[1] (3) with arr[min_idx] (3):
Array remains: [2, 3, 8, 4, 5]
Iteration 3 (i = 2):
Array: [2, 3, 8, 4, 5]
Starting with i = 2:
Assume min_idx = 2 (8 is the minimum)
Inner Loop:
Compare arr[3] (4) with arr[2] (8):
4 < 8, so update min_idx = 3
Compare arr[4] (5) with arr[3] (4):
5 > 4, no update
Swap arr[2] (8) with arr[3] (4):
Array becomes: [2, 3, 4, 8, 5]
Iteration 4 (i = 3):
Array: [2, 3, 4, 8, 5]
Starting with i = 3:
Assume min_idx = 3 (8 is the minimum)
Inner Loop:
Compare arr[4] (5) with arr[3] (8):
5 < 8, so update min_idx = 4
Swap arr[3] (8) with arr[4] (5):
Array becomes: [2, 3, 4, 5, 8]*/