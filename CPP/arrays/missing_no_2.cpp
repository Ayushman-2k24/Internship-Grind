#include<iostream>
using namespace std;

int missing(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n;i++){
        xor1=xor1^i;
        cout<<xor1<<" "<<endl;
    }

    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
        cout<<xor2<<" "<<endl;
    }

    return xor1^xor2;
}
int main(){
    int arr[]={1,2,3,5,6};
    int size=6;
    int ans=missing(arr,size);
    cout<<ans<<endl;
}