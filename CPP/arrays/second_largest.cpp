#include<iostream>
#include<limits.h>
using namespace std;

int min(int arr[],int n){
    int first=INT_MIN;
    int second=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    return second;
}
 
int main(){
    int arr[]={34,100,56,43,56,7};
    int size=6;
    int ans=min(arr,size);
    cout<<ans<<endl;

}