#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int current_ele = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > current_ele)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j + 1] = current_ele;
    }
}
int main()
{

    int n;
    cin >> n;

    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    insertionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
/*Step-by-Step Walkthrough
Iteration 1 (i = 1):
Key: 3
Initial Array: [5, 3, 8, 4, 2]
Inner Loop:

Compare 3 (key) with 5 (arr[j], j = 0):
Since 5 > 3, shift 5 to the right.
Array becomes: [5, 5, 8, 4, 2]
Decrement j to -1.
Insert Key:

Place 3 at arr[j + 1] (index 0).
Array becomes: [3, 5, 8, 4, 2]
Iteration 2 (i = 2):
Key: 8
Initial Array: [3, 5, 8, 4, 2]
Inner Loop:

Compare 8 (key) with 5 (arr[j], j = 1):
Since 5 <= 8, no more shifts are needed.
Insert Key:

Place 8 at arr[j + 1] (index 2).
Array remains: [3, 5, 8, 4, 2]
Iteration 3 (i = 3):
Key: 4
Initial Array: [3, 5, 8, 4, 2]
Inner Loop:

Compare 4 (key) with 8 (arr[j], j = 2):
Since 8 > 4, shift 8 to the right.
Array becomes: [3, 5, 8, 8, 2]
Decrement j to 1.
Compare 4 with 5 (arr[j], j = 1):
Since 5 > 4, shift 5 to the right.
Array becomes: [3, 5, 5, 8, 2]
Decrement j to 0.
Insert Key:

Place 4 at arr[j + 1] (index 1).
Array becomes: [3, 4, 5, 8, 2]
Iteration 4 (i = 4):
Key: 2
Initial Array: [3, 4, 5, 8, 2]
Inner Loop:

Compare 2 (key) with 8 (arr[j], j = 3):
Since 8 > 2, shift 8 to the right.
Array becomes: [3, 4, 5, 8, 8]
Decrement j to 2.
Compare 2 with 5 (arr[j], j = 2):
Since 5 > 2, shift 5 to the right.
Array becomes: [3, 4, 5, 5, 8]
Decrement j to 1.
Compare 2 with 4 (arr[j], j = 1):
Since 4 > 2, shift 4 to the right.
Array becomes: [3, 4, 4, 5, 8]
Decrement j to 0.
Compare 2 with 3 (arr[j], j = 0):
Since 3 > 2, shift 3 to the right.
Array becomes: [3, 3, 4, 5, 8]
Decrement j to -1.
Insert Key:

Place 2 at arr[j + 1] (index 0).
Array becomes: [2, 3, 4, 5, 8]*/