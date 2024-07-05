/* given an array of name of fruita , you are supposed to sort it in lexographical order using selection sort
i/p: ["pappaya","lime","watermelon","apple","mango","kiwi"]
o/p:["apple", "kiwi", "lime", "mango", "pappaya", "watermelon"]
*/
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void selectionsort(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // finding minimum element
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(fruit[min_idx], fruit[j]) > 0)
            {
                min_idx = j;
            }
        }
        // place minimum element at the beginning
        if (i != min_idx)
        {
            swap(fruit[i], fruit[min_idx]);
        }
    }
    return;
}
int main()
{

    char fruit[][60] = {"pappaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);
    selectionsort(fruit, n);

    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
       
    }
    return 0;
}