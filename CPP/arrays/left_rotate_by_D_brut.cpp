#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int d=3;
    int temp[d];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
   
    for (int i = 0; i < size; i++)
    {
        temp[i]=arr[i];
    }
    for (int i = d; i < size; i++)
    {
        arr[i-d]=arr[i];
    }
    for (int i = size-d; i < size; i++)
    {
        arr[i]=temp[i-(size-d)];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
}