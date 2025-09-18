#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,3,3,4,5,5,6,6,6,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i=0;
    for (int  j = 1; j < size; j++)
    {
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for (int j = 0; j < i+1; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    
}