#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    
}