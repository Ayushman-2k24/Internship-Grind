#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,0,6,0,0,5,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}