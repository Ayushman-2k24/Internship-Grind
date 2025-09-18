#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    
    int first_element=arr[0];
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=first_element;
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    
    
}