#include<iostream>
using namespace std;

int missing(int arr[],int n){
    int sum=n*(n+1)/2;
    int total=0;
    for(int i=0;i<n-1;i++){
        total=arr[i]+total;
    }
    return sum-total;
}
int main(){
    int arr[]={1,2,3,5,6};
    int size=6;
    int ans=missing(arr,size);
    cout<<ans<<endl;

}