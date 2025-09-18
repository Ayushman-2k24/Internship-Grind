// u are given a n and array of n-1 u have to find which no is missing from the array which is in between 1 to n

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int xor1=0;
    int xor2=0;
    for (int i = 1; i <= n; i++)
    {
        xor1=xor1^i;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        xor2=xor2^arr[i];
    }
    int ans=xor1^xor2;
    cout<<ans<<endl;
}