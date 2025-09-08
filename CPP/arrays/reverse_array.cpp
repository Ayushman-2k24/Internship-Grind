#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    int left=0; 
    int right=n-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    Reverse(arr,size);

}