#include<iostream>
using namespace std;

void shift(int arr[],int n){
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
}
int main(){
    int arr[]={1,0,3,0,0,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    shift(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}