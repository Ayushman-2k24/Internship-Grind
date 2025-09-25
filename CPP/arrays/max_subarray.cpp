
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
int check(vector<int> arr, int n)
{
    int max_i=INT_MIN;
    int start=0;
    int end=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum=sum+arr[j];
            if(sum>max_i){
                max_i=sum;
                start=i;
                end=j;
            }
        }
        
    }
    cout << "Max Subarray Sum = " << max_i << endl;
    cout << "From index " << start << " to " << end << endl;
    return max_i;
}
int main()
{
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int n = arr.size();
    int ans = check(arr, n);
    cout << ans << endl;
}
