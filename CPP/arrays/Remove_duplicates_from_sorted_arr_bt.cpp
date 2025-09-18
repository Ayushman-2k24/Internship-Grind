#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arr[] = {1,1,2,3,3,4,5,5,6,6,6,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    set<int>s;
    for(int i=0;i<size;i++){
        s.insert(arr[i]);
    }

    int i=0;
    for(int x:s){
        arr[i]=x;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout<<arr[j]<<" ";
    }
    
}