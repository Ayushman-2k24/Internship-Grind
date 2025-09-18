// u are given a n and array of n-1 u have to find which no is missing from the array which is in between 1 to n

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    int missing = -1;
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            missing = i;
            break;
        }
    }
    cout << missing << endl;
}