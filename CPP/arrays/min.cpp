#include<iostream>
#include<limits.h>
using namespace std;

int min(int arr[],int n){
    int min=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    return min;
}
 
int main(){
    int arr[]={34,100,56,43,56,7};
    int size=6;
    int ans=min(arr,size);
    cout<<ans<<endl;

}