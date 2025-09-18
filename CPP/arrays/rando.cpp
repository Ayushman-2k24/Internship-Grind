#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
bool check_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (check_sort(arr, size))
    {
        cout << "its sorted";
    }
    else
    {
        cout << "its not";
    }
}