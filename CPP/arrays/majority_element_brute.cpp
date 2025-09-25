// which elemet comes greater then n/2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int check(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2,2,3,3,1,2,2};
    int n = arr.size();
    int ans = check(arr, n);
    cout << ans << endl;
}
