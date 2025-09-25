#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int check(vector<int>arr,int n){
    return 1;
    
}
int main(){
    vector<int>arr={1,2,3,5};
    int n=5;
    int nsum=n*(n+1)/2;
    int sum=0;
    for (int i = 0; i < n-1; i++)
    {
        sum=sum+arr[i];
    }
    cout<<nsum-sum;
    // for (int j = 0; j < i; j++)
    // {
    //     cout<<arr[j]<<" ";
    // }
    
    
}