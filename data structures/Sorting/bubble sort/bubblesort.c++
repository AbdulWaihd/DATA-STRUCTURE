#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
            
        }
    }

    return;
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

    bubblesort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
/*Step-by-Step Walkthrough
Iteration 1 (i = 0):
Initial Array: [5, 3, 8, 4, 2]
Inner Loop:

j = 0:
Compare arr[0] (5) with arr[1] (3):
Since 5 > 3, swap them.
Array becomes: [3, 5, 8, 4, 2]
j = 1:
Compare arr[1] (5) with arr[2] (8):
Since 5 < 8, no swap.
j = 2:
Compare arr[2] (8) with arr[3] (4):
Since 8 > 4, swap them.
Array becomes: [3, 5, 4, 8, 2]
j = 3:
Compare arr[3] (8) with arr[4] (2):
Since 8 > 2, swap them.
Array becomes: [3, 5, 4, 2, 8]
Iteration 2 (i = 1):
Array: [3, 5, 4, 2, 8]
Inner Loop:

j = 0:
Compare arr[0] (3) with arr[1] (5):
Since 3 < 5, no swap.
j = 1:
Compare arr[1] (5) with arr[2] (4):
Since 5 > 4, swap them.
Array becomes: [3, 4, 5, 2, 8]
j = 2:
Compare arr[2] (5) with arr[3] (2):
Since 5 > 2, swap them.
Array becomes: [3, 4, 2, 5, 8]
Iteration 3 (i = 2):
Array: [3, 4, 2, 5, 8]
Inner Loop:

j = 0:
Compare arr[0] (3) with arr[1] (4):
Since 3 < 4, no swap.
j = 1:
Compare arr[1] (4) with arr[2] (2):
Since 4 > 2, swap them.
Array becomes: [3, 2, 4, 5, 8]
Iteration 4 (i = 3):
Array: [3, 2, 4, 5, 8]
Inner Loop:

j = 0:
Compare arr[0] (3) with arr[1] (2):
Since 3 > 2, swap them.
Array becomes: [2, 3, 4, 5, 8]*/