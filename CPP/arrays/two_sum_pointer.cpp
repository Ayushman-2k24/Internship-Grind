#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={1,5,7,3,5,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int target=5;
    sort(arr.begin(),arr.end());
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<"yes"<<endl;
            break;
        }else if(arr[start]+arr[end]<target){
            start++;
        }
        else if(arr[start]+arr[end]>target){
            end--;
        }
    }
}