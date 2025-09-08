#include<iostream>
#include<limits.h>
using namespace std;

int linear(int arr[],int n,int search){
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            return true;
        }
    }
    return false;
}
 
int main(){
    int arr[]={34,100,56,43,56,7};
    int size=6;
    int search=100;
    int ans=linear(arr,size,search);
    cout<<ans<<endl;

}