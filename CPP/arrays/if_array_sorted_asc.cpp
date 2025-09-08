#include<iostream>
#include<limits.h>
using namespace std;

bool check(int arr[],int n){
    int i=0;
    while(i<n-1){
        if(arr[i]<arr[i+1]){
            i++;
        }else{
            return false;
        }
    }
    
    return true;
}
 
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    bool ans=check(arr,size);
    cout<<ans<<endl;

}