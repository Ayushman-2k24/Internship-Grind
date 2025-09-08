#include<iostream>
using namespace std;

int binary(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(left<=right){
        if(arr[mid]==target){
            return mid;
        }else if(target<mid){
            end=mid-1;
        }else if(target>mid){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
      return -1;
}
 
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int search=1;
    int ans=binary(arr,size,search);
    cout<<ans<<endl;

}